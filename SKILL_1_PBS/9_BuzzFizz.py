"""CODE 9:	Write a Python program which iterates the integers from 1 to 50. For multiples of three print "Fizz"
instead of the number and for the multiples of five print "Buzz". For numbers which are multiples of both three and
five print "FizzBuzz".

Input: Enter no:51

Sample Output :
fizzbuzz
1
2
fizz
4
buzz . . .
"""

for i in range(int(input("Enter no: ")) + 1):
    if not i % 3 and not i % 5:
        print('fizzbuzz')
    elif not i % 3:
        print('fizz')
    elif not i % 5:
        print('buzz')
    else:
        print(i)
