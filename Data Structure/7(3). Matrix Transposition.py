A = [[12, 7],
	 [4, 5],
	 [3, 8]]

T = [[0, 0, 0],
	 [0, 0, 0]]

for k in range(len(A)):
	for j in range(len(A[0])):
		T[j][k] = A[k][j]

for r in T:
	print(r)