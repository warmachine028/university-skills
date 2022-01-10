""" CODE 6:
Write a program to delete a node as per given position of Circular Linked List.
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
        if ref is None:
            return
        # Pythonic flavour of do while loop
        while True:
            print(ref.data, end=' ')
            ref = ref.next
            if ref is self.head:
                print()
                return

    def delete_any(self, position):
        # Can't delete from negative position or empty list
        if position < 1 or self.head is None:
            return
        elif position == 1:
            # Deletion from Singleton list
            if self.head.next is self.head:
                self.head = self.tail = None
            # Deletion of first element
            else:
                self.head = self.tail.next = self.head.next
        else:
            count = 1
            ref = self.head
            prev = None  # To store the address of previous node
            while count < position:
                prev = ref
                ref = ref.next
                if ref is self.head:
                    break
                count += 1

            if count == position:
                # Deleting last element
                prev.next = ref.next
                self.tail = prev if ref.next is self.head else self.tail


# __main__
CLL = CircularLinkedList()
n = int(input('No. of Node '))
list(map(CLL.append, (int(input()) for _ in range(n))))

CLL.delete_any(int(input('Node to be deleted ')))
CLL.print()
