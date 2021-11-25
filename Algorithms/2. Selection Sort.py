"""
Selection Sort
-------------------

Selection Sort (сортировка выбором) - простой, но более эфф. алгоритм чем пуз. сорт.
Список делится на 2 части: отсортированную и ту, которую предстоит отсортировать. Происходит поиск меньшего элемента во 2-ой части, который в последствии добавляется в конце первого.  

[3, 1, 5, 2]

1) [{1}, 3, 5, 2]
2) [1, {2}, 5, 3]
3) [1, 2, {3}, 5]

Сортируется слева направо.
"""
def selection_sort(arr):
	for i in range(len(arr)):
		minimum = i

		# Выбор наименьшего в неотсортированной части
		for j in range(i+1, len(arr)):
			if arr[minimum] > arr[j]:
				minimum = j
		
		arr[minimum], arr[i] = arr[i], arr[minimum]


nums = [64, 25, 12, 22, 11]
selection_sort(nums)
print(nums)