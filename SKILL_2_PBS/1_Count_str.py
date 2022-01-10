""" CODE 1:
Write a Python program to count the number of strings where the string length is 2 or more and the first
and last character are same from a given list of strings.

Sample List : ['abc', 'xyz', 'aba', '1221']
Expected Result : 2

"""

strings = ["abc", "xyz", "aba", "1221"]
res = [string for string in strings if len(string) > 2 and string[0] == string[-1]]
print(f"Expected Result : {len(res)}")
