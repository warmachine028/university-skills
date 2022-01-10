""" CODE 5: 
Twenty five numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd.
Enter a number : 7
{-truncated-}
Enter a number : 5

Data contain 25 positive, 0 negative, 0 zeroes, 10 even and 15 odd numbers
"""

d = {"pos": 0, "neg": 0, "zero": 0, "even": 0, "odd": 0}
for i in range(25):
    data = int(input("Enter a number : "))
    d["neg" if data < 0 else "pos" if data > 0 else "zero"] += 1
    d["odd" if data % 2 else "even"] += 1

print(f"Data contains {d['pos']} positive,", end = ' ')
print(f"{d['neg']} negative, {d['zero']}", end= ' ')
print(f"zeroes, {d['even']} even and", end = ' ')
print(f"{d['odd']} odd numbers")
