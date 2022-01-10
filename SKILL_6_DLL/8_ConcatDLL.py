"""CODE 8:
Given two doubly linked list, write a program to combine/concatenate the doubly linked list .
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
            print(ref.data, end=" ")
            ref = ref.next
        print()

    def combine(self, other):
        self.tail.next = other.head
        other.head.prev = self.tail
        self.tail = other.tail


# __main__
DLL1 = DoublyLinkedList()
DLL2 = DoublyLinkedList()
list(map(DLL1.append, map(int, input("List 1: ").split())))
list(map(DLL2.append, map(int, input("List 2: ").split())))
DLL1.combine(DLL2)
print("Combined List: ", end='')
DLL1.print()
