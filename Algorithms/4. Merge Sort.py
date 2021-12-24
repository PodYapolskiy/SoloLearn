"""
Merge Sort
---------------

Merge Sort (сортировка слиянием) - алгоритм, придерживающийся принципа `Разделяй и властвуй`; `Divide and Conquer`.

Состоит из 2 этапов:
	1. Несортированный список последовательно делится на N списков, где каждый включает один «несортированный» элемент, а N — это число элементов в оригинальном массиве.
	2. Списки последовательно сливаются группами по два, создавая новые отсортированные списки до тех пор, пока не появится один финальный отсортированный список.

Dividing:
[31, 4, 88, 1, 4, 2, 42]
[31, 4, 88, 1] [4, 2, 42]
[31, 4] [88, 1] [4, 2] [42]
[31] [4] [88] [1] [4] [2] [42]

Merging
[4, 31] [1, 88] [2, 4] [42]
[1, 4, 31, 88] [2, 4, 42]
[1, 2, 4, 4, 31, 42, 88]

Операция слияния - квинтэссенция всего алгоритма.
"""
def merge_sort(arr):
	# Последнее разделение массива
	if len(arr) <= 1:
		return arr
	mid = len(arr) // 2

	# Выполняем рекурсивно с 2-ух сторон
	left, right = merge_sort(arr[:mid]), merge_sort(arr[mid:])

	# Объединяем стороны вместе
	return merge(left, right, arr.copy()) 


def merge(left, right, merged: list):
	left_cursor, right_cursor = 0, 0

	while (left_cursor < len(left)) and (right_cursor < len(right)):

		# Сортируем каждый и помещаем в результат
		if left[left_cursor] <= right[right_cursor]:
			merged[left_cursor + right_cursor] = left[left_cursor]
			left_cursor += 1
		else:
			merged[left_cursor + right_cursor] = right[right_cursor]
			right_cursor += 1
	
	for left_cursor in range(left_cursor, len(left)):
		merged[left_cursor + right_cursor] = left[left_cursor]
	
	for right_cursor in range(right_cursor, len(right)):
		merged[left_cursor + right_cursor] = right[right_cursor]
	
	return merged
	

nums = [3, 4, 5, 1, 2, 8, 3, 7, 6]
print(merge_sort(nums))