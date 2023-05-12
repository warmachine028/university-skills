""" CODE 7:
Write a program to delete last node of Circular Linked list.
"""
from dataclasses import dataclass


@dataclass
class Node:
    data: int
    next = None


class CircularLinkedList:
    head = None
    tail = None

    def append(self, data):
        temp = Node(data)
        if not self.head:
            self.head = self.tail = temp
        else:
            self.tail.next = temp
            self.tail = temp
        temp.next = self.head

    def print(self):
        ref = self.head
        if ref is None:  # List Empty
            return
        # Pythonic flavour of do while loop
        while True:
            print(ref.data, end=' ')
            ref = ref.next
            if ref is self.head:
                print()
                return

    def pop(self):
        # Can't delete from empty list
        if not self.head:
            return
            # Deleting from Singleton List
        if self.head.next is self.head:
            self.head = self.tail = None
        else:
            ref = self.head
            prev = None
            while ref != self.tail:
                prev = ref
                ref = ref.next
            prev.next = self.head
            self.tail = prev


# __main__
CLL = CircularLinkedList()
inputs = map(int, input('The list contains: ').split())
list(map(CLL.append, inputs))
CLL.pop()
print('The list contains:', end=' ')
CLL.print()
