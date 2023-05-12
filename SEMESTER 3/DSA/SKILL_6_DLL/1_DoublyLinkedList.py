""" CODE 1:
Write a program to create a doubly linked list.
"""
from dataclasses import dataclass


@dataclass
class Node:
    data: int
    prev = None
    next = None


@dataclass
class DoublyLinkedList:
    head = None

    def add(self, data: int) -> None:
        temp: Node = Node(data)
        if not self.head:
            self.head = temp
            return
        ref = self.head
        while ref.next:
            ref = ref.next
        ref.next, temp.prev = temp, ref

    def print(self) -> None:
        ref = self.head
        while ref:
            print(ref.data)
            ref = ref.next


# __main__
DLL = DoublyLinkedList()
for i in range(int(input())):
    DLL.add(int(input()))
DLL.print()
