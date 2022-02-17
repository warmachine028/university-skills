"""
CODE 11: Reverse words in a given String in Python
Input : str = geeks quiz practice code
Output : str = code practice quiz geeks
"""

string = "geeks quiz practice code"
print(" ".join(string.split()[::-1]))
