""" CODE 4: Write a menu program for following operation of Doubly Linked List to Insert a node at the last of the
linked list.
"""
from dataclasses import dataclass


@dataclass
class Node:
    data: int
    next = None
    prev = None


@dataclass
class DoublyLinkedList:
    head = None
    tail = None

    def append(self, data):
        temp = Node(data)
        if not self.head:
            self.head = temp
        else:
            temp.prev = self.tail
            self.tail.next = temp
        self.tail = temp

    def print(self):
        ref = self.head
        while ref:
            print(ref.data)
            ref = ref.next


# __main__
DLL = DoublyLinkedList()
for _ in range(int(input()) + 1):
    DLL.append(int(input()))

DLL.print()
