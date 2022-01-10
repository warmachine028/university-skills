"""
CODE 1: Write a Python program to find those numbers which are divisible by 7 and multiple of 5, between 1500 and
2700 (both included).

INPUT:
Enter the lower range: 1500
Enter the upper range: 2700

OUTPUT:
1505,1540,1575,1610,1645,1680,1715,1750,1785,1820,1855,1890,1925,1960,1995,2030,2065,2100,2135,2170,2205,2240,2275,2310,
2345,2380,2415,2450,2485,2520,2555,2590,2625,2660,2695

"""


def div_5_7(a: int, b: int) -> tuple[int, ...]:
    return *(n for n in range(a, b + 1) if not n % 35),


# INPUT:
lower_range = int(input("Enter the lower range: "))
upper_range = int(input("Enter the upper range: "))

# OUTPUT:
print(*div_5_7(lower_range, upper_range), sep=', ')
