"""
CODE 1:
 A python program to construct the pattern using nested loop
"""


def pattern(n: int) -> str:
    string = ''
    n += 1
    for i in [*range(0, n // 2 - 1), *range(n // 2 - 1, -1, -1)]:
        for j in range(n // 2 - i):
            string += '* '
        for j in range(i * 4):
            string += ' '
        for j in range(n // 2 - i):
            string += '* '
        string += '\n'
    return string


lines = int(input("Lines: "))
print(pattern(lines))
