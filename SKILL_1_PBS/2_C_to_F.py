"""
CODE 2:	Write a Python program to convert temperatures to and from celsius, fahrenheit.
[ Formula : c/5 = f-32/9]
[ where c = temperature in celsius
    and f = temperature in fahrenheit ]

INPUT: 60°C
OUTPUT: 140 in Fahrenheit

"""


def c_to_f(c: float) -> float:
    return c * 9 / 5 + 32


celsius = float(input("Enter temperature in celsius: "))
print(f"{c_to_f(celsius)} degrees in Fahrenheit")
