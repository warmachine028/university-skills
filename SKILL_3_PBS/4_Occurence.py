""" CODE 4:
Twenty five numbers are entered from the keyboard into an array. The number to be searched is entered through the keyboard by the user. Write a program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array.
Enter number : 9
{-truncated-}
Enter number : 5


Enter the number you want to search : 3

3 is present in the data 6 times.
"""

count = {}
for i in range(25):
    x = int(input("Enter number : "))
    count[x] = count[x] + 1 if x in count else 1

srch = int(input("Enter the numbr you want to srch : "))
print(f"{srch} is present in the data", end=" ")
print(f"{count[srch]} times.")
