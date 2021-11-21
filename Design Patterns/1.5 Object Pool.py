"""
Object Pool
----------------

Пул объектов - паттерн программирования, использующийся, когда создание экземпляров класса требует больших затрат, объекты в системе создаются часто, но число создаваемых объектов в единицу времени ограничено.

Основная идея паттерна Object Pool состоит в том, чтобы избежать создания новых экземпляров класса в случае возможности их повторного использования.



Offer a significant performance boost; it is most effective in
situations where the cost of initializing a class instance is high, the
rate of instantiation of a class is high, and the number of
instantiations in use at any one time is low.



http://cpp-reference.ru/patterns/creational-patterns/object-pool/
"""
 
'''
class ReusablePool:
    """
    Manage Reusable objects for use by Client objects.
    """
 
    def __init__(self, size):
        self._reusables = [Reusable() for _ in range(size)]
 
    def acquire(self):
        return self._reusables.pop()
 
    def release(self, reusable):
        self._reusables.append(reusable)
 
 
class Reusable:
    """
    Collaborate with other objects for a limited amount of time, then
    they are no longer needed for that collaboration.
    """ 
    pass

 
if __name__ == "__main__":
    reusable_pool = ReusablePool(10)
    reusable = reusable_pool.acquire()
    reusable_pool.release(reusable)
'''

"""
Представим ситуацию, что у нас есть корабль, который может выдержать несколько выстрелов.
Создание объекта Shot стоит дорого.
Поэтому объекты семейства Shot создаём 1 раз.
А по истечении жизни объект остаётся в памяти.
"""
class Shot(object):
    """
    Сущность, способная пережить несколько попаданий
    """
    def __init__(self, lifetime=5):
        self.lifetime = lifetime
 
    def update(self) -> bool:
        self.lifetime -= 1
        return self.lifetime > 0
 
 
class ObjectPool:
    """
    Пул объектов
    """
    def __init__(self, **kwargs):
        """
        Создание пула
        """
        self._clsname = kwargs['classname']
        self._args = kwargs.get('args', [])
        self._num_objects = max(kwargs['num'], 0)
        self._pred = kwargs['update_func']
        self._max_objects = kwargs.get('max', self._num_objects)
 
        # Create the objects
        self._objs = [apply(self._clsname, self._args)
                      for x in range(self._num_objects)]
        self._end = len(self._objs)
 
    def _extend_list(self, args):
        """
        Добавить одно место в пул
        """
        self._objs.append(apply(self._clsname, args))
        self._num_objects += 1
 
    def add(self, *args):
        """
        Добавить один объект в пул
        """
        newend = self._end + 1
        #Если достигнут максимум - отбой
        if newend > self._max_objects:
            return None
        #Если заняли все места - добавляем еще одно место
        if newend > len(self._objs):
            self._extend_list(args)
        else:
            self._objs[self._end].reset(*args)
        self._end += 1
        return self._end - 1
 
    def update(self, *args):
        """
        Обновить все объекты в пуле
        """
        self._end = partition(self._pred, self._objs, 0, self._end, args)
        return self._end
 
 
def update_object(x):
    """
    Обновить объект
    """
    return x.update()
 
def partition(pred, seq, first, last, *args):
    """
    Функция сортировки объектов
    """
    if first > last:
        return 0
 
    for i in range(first, last):
        if not pred(seq[i]):
            break
    else:
        return last
 
    for j in range(i+1, last):
        if pred(seq[j]):
            seq[i], seq[j] = seq[j], seq[i]
            i += 1
    return i
 
"""
Собственно использование пула
"""
shots = ObjectPool(classname=Shot, update_func=update_object, num=5)
while shots.update():
    pass
 
print("Done!")

