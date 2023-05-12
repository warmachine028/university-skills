""" CODE 11: WAP to print the sum of the diagonal element of the M*N square matrix.

Please Enter Number of rows and columns  :  3 3

 Please Enter the Matrix Elements
10 20 30
40 50 60
70 80 90

 The Sum of Diagonal Elements of a Matrix =  150

"""
matrix = [[10, 20, 30], 
          [40, 50, 60], 
          [70, 80, 90]]

s = sum(matrix[i][i] for i in range(3))
print(f"The Sum of Diagonal Elements of a Matrix =  {s}")
