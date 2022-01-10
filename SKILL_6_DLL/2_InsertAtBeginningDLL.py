""" CODE 2:
Write a menu program for following operation of Doubly Linked List toInsert a node at beginning.
"""

from dataclasses import dataclass


@dataclass
class Node:
    data: int
    next: 'Node'
    prev = None


@dataclass
class DoublyLinkedList:
    head = None

    def insert(self, data):
        temp = Node(data, self.head)
        if self.head:
            self.head.prev = temp
        self.head = temp

    def print(self):
        ref = self.head
        while ref:
            print(ref.data)
            ref = ref.next


# __main__
DLL = DoublyLinkedList()
for _ in range(int(input())):
    DLL.insert(int(input()))
DLL.print()
