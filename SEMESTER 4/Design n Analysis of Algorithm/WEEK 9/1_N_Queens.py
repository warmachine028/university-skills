# CODE 1: CODE 1: Given a chess board having cells, you need to place N queens on the board in such a way that no queen attacks any other queen. 

def nqueen(start, nq, board):
    def place(k, i):
        print("why")
        for j in range(1, k - 1):
            print("here4")
            if board[j] == i or \
                (abs(board[j] - i) == abs(j - k)):
                print("here2")
                return 0
        return 1

    def solve(k, n):
        for i in range(1, n):
            if (place(k, i)):
                print("here", k)
                board[k] = i
                if k == n:
                    print(board)
                    return
                solve(k + 1, n)

    solve(start, nq)


def main():
    n = int(input()) + 1
    board = [[0] * n for _ in range(n)]
    nqueen(1, n, board)
    print(board)


main()
