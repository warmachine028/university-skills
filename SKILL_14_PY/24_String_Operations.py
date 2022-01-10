""" CODE 24:
(a) Given 2 strings, str1, and str2 return a new string made of the first, middle and last char of each of the input
strings. characters from the 1st string will be in lowercase and characters from the 2nd string will be in uppercase
use python
(b)	Take a sentence as input. Take two integer numbers as input. Print the substring starting and ending at the
positions same as those numbers, use python
(c)	Write program in python to find the prime numbers in a range using function

"""


def build_string(string1: str, string2: str) -> str:
    final_string = (string1[0] + string1[len(string1) // 2] + string1[-1]).lower()
    final_string += (string2[0] + string2[len(string1) // 2] + string2[-1]).upper()
    return final_string


def prime_numbers_in_range(lower_limit: int, upper_limit: int) -> list[int]:
    prime_numbers = []
    for i in range(lower_limit, upper_limit + 1):
        prime = True
        for j in range(2, int(i ** (1 / 2)) + 1):
            if not i % j:
                prime = False
                break
        if prime: prime_numbers.append(i)
    return prime_numbers


str1, str2 = input("str1: "), input("str2: ")
# a)
print(build_string(str1, str2))
# b)
print(input("sentence: ")[int(input("starting: ")): int(input("ending: ")) + 1])
# c)
print(prime_numbers_in_range(10, 30))
