""" CODE 3:
Write a menu program for following operation of Doubly Linked List to Insert a node as per given position.
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

    def insert_any(self, data, position):
        if position < 0:
            return
        temp = Node(data)
        # inserting at the 1st position
        if position == 0:
            if self.head:
                temp.next = self.head
            self.head = temp
        else:
            counter = 1
            ref = self.head
            while ref.next and counter < position:
                ref = ref.next
                counter += 1

            temp.prev, temp.next = ref, ref.next
            if counter == position:
                if ref.next:  # inserting at the middle
                    ref.next.prev = temp
                ref.next = temp  # inserting at Last Position

    def print(self):
        ref = self.head
        while ref:
            print(ref.data, end=" ")
            ref = ref.next
        print()


# __main__
DLL = DoublyLinkedList()
for pos in range(int(input())):
    DLL.insert_any(int(input()), pos)
DLL.insert_any(int(input()), int(input()))
DLL.print()
