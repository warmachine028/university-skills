""" CODE 7:
Write a program to delete last node of Doubly Linked List.
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
    tail = None

    def append(self, data):
        temp = Node(data)
        if not self.head:
            self.head = temp
        else:
            temp.prev = self.tail
            self.tail.next = temp
        self.tail = temp

    def pop(self):
        # Empty List
        if not self.tail:
            return

        # Deleting from Singleton list
        if self.head is self.tail:
            self.head = self.tail = None
        # Deleting Last Element
        else:
            self.tail = self.tail.prev
            self.tail.next = None

    def print(self):
        print("The list contains: ", end='')
        ref = self.head
        while ref:
            print(ref.data, end=' ')
            ref = ref.next
        print()


# __main__
DLL = DoublyLinkedList()
inputs = map(int, input("The list contains: ").split(' '))
list(map(DLL.append, inputs))
DLL.pop()
DLL.print()
