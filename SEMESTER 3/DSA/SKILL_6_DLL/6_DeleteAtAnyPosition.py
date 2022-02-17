""" CODE 6:
Write a program to delete a node as per given position of Singly Linked List.
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

    def delete_any(self, position):
        if not self.head or position < 0:
            return
        if position == 0:
            if nxt := self.head.next:
                nxt.prev = None
                self.head = nxt
            else:
                self.head = self.tail = None
        else:
            ref = self.head
            count = 0
            while ref.next and count < position:
                ref = ref.next
                count += 1

            prev = ref.prev
            prev.next = ref.next
            if count == position:
                if ref == self.tail:
                    self.tail = prev
                else:
                    ref.next.prev = prev

    def print(self):
        ref = self.head
        while ref:
            print(ref.data, end=' ')
            ref = ref.next
        print()


# __main__
DLL = DoublyLinkedList()
input()
inputs = map(int, input().split(' '))
list(map(DLL.append, inputs))
DLL.delete_any(int(input()))
DLL.print()
