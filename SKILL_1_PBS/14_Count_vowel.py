"""
CODE 14: Python program to count number of vowels using sets in given string
Input : GeeksforGeeks
Output : No. of vowels : 5
"""


def count_vowels(word: str) -> int:
    count = 0
    vowels = set("aeiou")
    for character in word:
        if character.lower() in vowels:
            count += 1
    return count


string = 'GeeksforGeeks'
print(f"No. of vowels : {count_vowels(string)}")
