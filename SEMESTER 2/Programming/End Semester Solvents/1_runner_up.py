"""
CODE 1: For University Sports Day for the participants' score sheet, you are required to find the runner-up score. You are given scores. Store them in a list and find the score of the runner-up. You can use in build functions to solve the problem.
The first line contains size of array. The second line contains an array of integers each separated by a space.
Constraints:
-> 2<=n<=10
-> -100<=A[i]<=100
Final output: Print the runner-up score.
ex: Given list is [2,4,6,6,5] . The maximum score is , second maximum is . Hence, we print as the runner-up score.

"""

if __name__ == "__main__":
    n: int = int(input())
    # *maximum, sec_max, max = sorted(set([int(i) for i in input().split()]))
    # print(sec_max)

    scores:map[int] = map(int, input().split())
    print(sorted(set(scores))[-2])
