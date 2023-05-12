""" CODE 12: Write a program to multiply any two matrixes also with condition of matrix multiplication.
Input elements of matrix1:
1 2 3
4 5 6
7 8 9
Input elements of matrix2:
9 8 7
6 5 4
3 2 1
Output
Product of matrices =
30 24 18
84 69 54
138 114 90


"""

m1 = [[1, 2, 3], 
      [4, 5, 6], 
      [7, 8, 9]]

m2 = [[9, 8, 7], 
      [6, 5, 4], 
      [3, 2, 1]]

m3 = [[sum(m1[row][cur] * m2[cur][col] 
                  for cur in range(3))
                  for col in range(3)] 
                  for row in range(3)]

 

print("Product of matrices = ")
[print(*row) for row in m3]
