# Program to multiply two matrices using nested loops 


A = [[1,2,3], 
	[1, 2, 3], 
	[1, 2, 3]] 


B = [[1,2,3], 
	[1,2,3], 
	[1,2,3]] 
	
result = [[0,0,0], 
		[0,0,0], 
		[0,0,0]] 
for i in range(len(A)): 

	for j in range(len(B[0])): 

		for k in range(len(B)): 
			result[i][j] += A[i][k] * B[k][j] 

for r in result: 
	print(r) 
