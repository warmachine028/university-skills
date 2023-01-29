# Summate a number's digits until a single digit is obtained
def sum2(num):
    mod = num % 9
    return num if not num else mod or 9

def summ(number):
    digits = [*map(int, list(str(number)))]
    n = sum(digits)
    if not n < 10:
        return summ(n)
    else:
        return n

numbers = [1109, 19001, 0, 1221, 21]
print(*[*map(lambda n: summ(n)==sum2(n), numbers)], sep='\n')

# Print positive and negative indices of string characters
string = "string"
print(*[f"{ch} -> {i} {i-len(string)}" for i, ch in enumerate(string)], sep='\n')
