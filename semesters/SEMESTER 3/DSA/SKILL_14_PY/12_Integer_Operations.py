""" CODE 12:
Ask the user to enter 10 test scores. Write a python program to do the following:
(a) Print out the highest and lowest scores.
(b) Print out the average of the scores.
(c) Print out the second-largest score.
(d) If any of the scores is greater than 100, then after all the scores have been entered, print a message warning the
user that a value over 100 has been entered.
(e) Drop the two lowest scores and print out the average of the rest of them.

"""
scores = list(map(int, input("Enter test scores: ").replace(' ', '').split(",")))[:10]
# a)
print(max(scores), min(scores))
# b)
print(sum(scores) / len(scores))
# c)
print(sorted(set(scores))[-2])
# d)
if any(map(lambda item: item > 100, scores)): print("values over 100 have been entered")
# e)
for i in range(2): scores.remove(min(scores))
print(sum(scores) / len(scores))
