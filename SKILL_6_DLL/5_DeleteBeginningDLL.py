""" CODE 5:
Write a program to delete a node at beginning of Doubly Linked List.
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

    def delete(self):
        if self.head:
            if nxt := self.head.next:
                nxt.prev = None
                self.head = nxt
            else:
                self.head = self.tail = None

    def print(self):
        ref = self.head
        while ref:
            print(ref.data, end=' -> ')
            ref = ref.next
        print('NULL')


# __main__
DLL = DoublyLinkedList()
inputs = map(int, input().split(' -> ')[:-1])
list(map(DLL.append, inputs))
DLL.delete()
DLL.print()
