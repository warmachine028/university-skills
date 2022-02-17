""" CODE 1:
Write a program to create a singly circular linked list.
"""
from dataclasses import dataclass


@dataclass
class Node:
    data: int
    next = None


class CircularLinkedList:
    head = None

    def add(self, data):
        temp = Node(data)
        if not self.head:
            self.head = temp
        else:
            ref = self.head
            while ref.next is not self.head:
                ref = ref.next
            ref.next = temp
        temp.next = self.head

    def print(self):
        ref = self.head
        if not ref:
            return
        while True:
            print(ref.data)
            ref = ref.next
            if ref is self.head:
                return


# __main__
CLL = CircularLinkedList()
for _ in range(int(input('No. of input node '))):
    CLL.add(int(input()))
CLL.print()


