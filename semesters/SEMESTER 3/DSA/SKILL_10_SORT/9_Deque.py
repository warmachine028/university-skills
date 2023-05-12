""" CODE 9:
Write a program for deque in which perform insert and delete operation using function.

"""


class DeQueue:
    def __init__(self, size):
        self.size = size
        self.top = -1
        self.queue = []

    def enqueue(self):
        if self.isFull():
            return
        self.queue.insert(0, input())
        self.top += 1

    def deleteFront(self):
        if self.isEmpty():
            return
        self.queue.pop(0)
        self.top -= 1

    def deleteLast(self):
        if self.isEmpty():
            return
        self.queue.pop()
        self.top -= 1

    def isEmpty(self):
        return self.top == 0

    def isFull(self):
        return self.top == self.size - 1

    def __str__(self):
        return "NULL" if self.isEmpty() else f"->{self.queue[self.top]}"


dq = DeQueue(10)
choice = -1
while choice != 5:
    choice = int(input())
    if choice == 1:
        dq.enqueue()
    elif choice == 2:
        dq.deleteLast()
    elif choice == 3:
        print(dq)
    elif choice == 4:
        dq.deleteFront()
    else:
        break
