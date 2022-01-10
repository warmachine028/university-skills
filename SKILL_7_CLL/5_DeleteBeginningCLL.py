""" CODE 5:
Write a program to delete a node at beginning of Circular singly Linked List.
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

    def delete(self):
        if self.head is None:  # Can't delete from empty list
            return
        if self.head.next is self.head:  # Singleton list
            self.head = self.tail = None
        else:
            self.head = self.tail.next = self.head.next

    def print(self):
        ref = self.head
        if ref is None:
            return
        while True:
            print(ref.data, end=' ')
            ref = ref.next
            if ref is self.head:
                print()
                return
            print('->', end=' ')


# __main__
CLL = CircularLinkedList()
inputs = map(int, input().split(' -> '))
list(map(CLL.append, inputs))
CLL.delete()
CLL.print()
