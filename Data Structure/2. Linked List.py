"""
		Часто используется для реализации других структур данных.
	Связанный список - последовательность узлов (nodes), в которой каждый узел хранит свои собственные данные и указатель/адрес (pointer) на расположение следующего узла.

	Один узел соединяется с другим, который в свою очередь, соединён с третим. Это можно представить в виде последовательной цепочки.


		DataLink --> DataLink --> DataLink

	Последний элемент в списке имеет ссылку на NULL, что указывает на конец последовательности.

		Преимущества:
		В отличие от массива:
	+ Не ограничивается объявленным количеством элементов.
	+ Связанный список может легко вставлять и удалять элементы без перераспределения или реорганизации всей структуры, потому что элементы данных не должны храниться непрерывно.

		Недостатки:
	- Произвольный доступ не доступен, надо общаться с узлами последовательно, начиная с первого => Мы не можем выполнять двоичный поиск в связанном списке.
	- Для каждого элемента списка требуется дополнительное место в памяти для ссылки.

	! Связанные списки обычно используются как фундаментальный строительный блок для реализации таких структур данных как: Стэки, очереди, деревья и графы.
"""


class Node:
	def __init__(self, data, next) -> None:
		self.data = data
		self.next = next


class LinkedList:
	def __init__(self) -> None:
		self.head = None

	def __repr__(self) -> str:
		string = ''
		n = self.head
		while (n != None):
			string += str(n.data) + ' => '
			n = n.next
		return string
		
	def add_at_front(self, data):
		self.head = Node(data, self.head)
	
	def add_at_end(self, data):
		if not self.head:
			self.head = Node(data, None)
			return None
		curr = self.head
		while curr.next:
			curr = curr.next
		curr.next = Node(data, None)
	
	def get_last_node(self):
		n = self.head
		while (n.next != None):
			n = n.next
		return n.data


linked_list = LinkedList()
linked_list.add_at_front(5)
linked_list.add_at_end(8)
linked_list.add_at_front(9)

print(linked_list)  # 9 => 5 => 8 => 
print(linked_list.get_last_node())  # 8
