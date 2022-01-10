"""CODE 13:
Given a string, reverse it using stack.
"""

def reverse_string(s):
    stack = []
    for char in s:
        stack.append(char)
    
    rev_str = ""
    while stack:
        rev_str += stack.pop()
    
    return rev_str


string = 'university'
print(reverse_string(string))
