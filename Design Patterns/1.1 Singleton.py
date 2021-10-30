"""
Singleton
--------------

Данный шаблон проектирования обеспечивает создание только одного экзепляра класса.

Используется:
    - Нужен доступ к общему ресурсу
    - Доступ к общ. ресурсу будет запрашиваться из отдельных частей программы
    - Может быть создать только один объект

Пример использования - регистратор (logger), используемый в системах входа в аккаунт.
"""


class Singleton(type):
    def __init__(cls, *args, **kwargs):
        super().__init__(*args, **kwargs)
        cls._instance = None
    
    def __call__(cls, *args, **kwargs):
        print("__call__ method")
        if cls._instance is None:
            cls._instance = super().__call__(*args, **kwargs)
        return cls._instance


class Logger(metaclass=Singleton):

    def do_something(self):
        return "some action"


l1 = Logger()
l2 = Logger()
print(l1 is l2, id(l1) == id(l2))  # True True
print(l2.do_something())
