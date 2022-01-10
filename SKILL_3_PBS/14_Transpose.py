""" CODE 14:
WAP to print the transpose of m*n matrix using pointer
How many rows and columns in the matrix:- 3 3

 Enter the elements:-
1 2 3
4 5 6
7 8 9

 The transpose of matrix is:-
 1 4 7
2 5 8
 3 6 9
"""
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

tmatrix = [i for i in zip(*matrix)]
print("The transpose of matrix is:-")
[print(*row) for row in tmatrix]
