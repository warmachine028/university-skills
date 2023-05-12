""" CODE 7:
Write a Python program that accepts a string and calculate the number of digits and letters.
Sample Data: Python 3.2
Expected Output:
Letters 6
Digits 2

"""

sample_data = "Python 3.2"
print(f"Letters {sum(1 for char in sample_data if char.isalpha())}\n"
      f"Digits {len(list(filter(lambda char: char.isdigit(), sample_data)))}")
