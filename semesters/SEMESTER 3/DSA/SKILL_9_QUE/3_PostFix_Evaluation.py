""" CODE 3:
Write a program to evaluate Postfix expression
"""


def evaluate(exp: str) -> int:
    stack = []
    for character in exp.split()[:-1]:
        if not character.isdigit():
            int1, int2 = stack.pop(), stack.pop()
            character = str(eval(int2 + character + int1))
        stack.append(character)
    return int(eval(stack.pop()))


expressions = [
    '12 23 + 14 - ?',  # 21
    '2 43 12 * + 12 + ?',  # 530
    '12 3 + 12 3 + * 12 3 + / ?',  # 15
    '32 34 12 * + 1 2 + * 1 1 + / 23 21 - * ?'  # 1320
]
print(*list(map(evaluate, expressions)), sep='\n')
