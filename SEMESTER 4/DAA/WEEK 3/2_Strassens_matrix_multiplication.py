# CODE 2: You are given two square matrices and multiply them using Strassen's matrix multiplication algorithm.

# LOGIC:
# p1 = a(f - h)
# p2 = (a + b)h
# p3 = (c + d)e
# p4 = d(g - e)
# p5 = (a + d)(e + h)
# p6 = (b - d)(g + h)
# p7 = (a - c)(e + f)

#        X  *  Y  =  Z
# [a | b]  [e | f]  [p5 + p4 - p2 + p6 |      p1 + p2     ]
# [c | d]  [g | h]  [     p3 + p4      | p1 + p5 - p3 - p7]


MATRIX = list[list[int]]


def split(P: MATRIX, m: int, n: int) -> MATRIX:
    C = [[0] * (len(P) // 2) for _ in range(len(P) // 2)]
    for i1, i2 in zip(range(len(C)), range(m, m + len(C))):
        for j1, j2 in zip(range(len(C)), range(n, n + len(C))):
            C[i1][j1] = P[i2][j2]
    return C


def join(C: MATRIX, P: MATRIX, m: int, n: int) -> None:
    for i1, i2 in zip(range(len(C)), range(m, m + len(C))):
        for j1, j2 in zip(range(len(C)), range(n, n + len(C))):
            P[i2][j2] = C[i1][j1]


def add(M1: MATRIX, M2: MATRIX) -> MATRIX:
    n = len(M1)
    return [[M1[i][j] + M2[i][j] for j in range(n)] for i in range(n)]


def sub(M1: MATRIX, M2: MATRIX) -> MATRIX:
    n = len(M1)
    return [[M1[i][j] - M2[i][j] for j in range(n)] for i in range(n)]


def multiply(X: MATRIX, Y: MATRIX) -> MATRIX:
    n = len(X)
    Z = [[0] * n for _ in range(n)]
    if n == 1:
        Z[0][0] = X[0][0] * Y[0][0]
        return Z

    mid = n // 2
    a, b = split(X, 0, 0), split(X, 0, mid)
    c, d = split(X, mid, 0), split(X, mid, mid)

    e, f = split(Y, 0, 0), split(Y, 0, mid)
    g, h = split(Y, mid, 0), split(Y, mid, mid)

    p1 = multiply(a, sub(f, h))
    p2 = multiply(add(a, b), h)
    p3 = multiply(add(c, d), e)
    p4 = multiply(d, sub(g, e))
    p5 = multiply(add(a, d), add(e, h))
    p6 = multiply(sub(b, d), add(g, h))
    p7 = multiply(sub(a, c), add(e, f))

    c00 = add(add(p4, p5), sub(p6, p2))
    c01 = add(p1, p2)
    c10 = add(p3, p4)
    c11 = sub(add(p1, p5), add(p3, p7))

    join(c00, Z, 0, 0), join(c01, Z, 0, mid)
    join(c10, Z, mid, 0), join(c11, Z, mid, mid)
    return Z


def strassen(matrix1: MATRIX, matrix2: MATRIX) -> MATRIX:
    return multiply(matrix1, matrix2)


def main():
    n = int(input())
    matrix1 = [list(map(int, input().split())) for _ in range(n)]
    matrix2 = [list(map(int, input().split())) for _ in range(n)]
    # Product
    print(strassen(matrix1, matrix2))


main()
# INPUT:
# 4
# 2 3 1 6
# 4 0 0 2
# 4 2 0 1
# 0 3 5 2
#
# 3 0 4 3
# 1 2 0 2
# 0 3 1 4
# 5 1 3 2

# OUTPUT:
# 39 15 27 28
# 22 2 22 16
# 19 5 19 18
# 13 23 11 30
