""" CODE 2:
Write a menu program for following operation of Circular Linked List to Insert a node
at beginning.
"""
from dataclasses import dataclass
from typing import Optional


@dataclass
class Node:
    data: int
    next: Optional['Node'] = None


class CircularLinkedList:
    head = None
    tail: 'Node'

    def add(self, data):
        temp = Node(data)
        if not self.head:
            self.head = temp
        else:
            self.tail.next = temp
        temp.next = self.head
        self.tail = temp

    def insert(self, data):
        self.head = Node(data, self.head)
        if tail := self.tail:
            tail.next = self.head
        else:
            self.tail = self.head

    def print(self):
        ref = self.head
        if not ref:
            return
        while True:
            print(ref.data)
            ref = ref.next
            if ref is self.head:
                return


# __main__
CLL = CircularLinkedList()
n = int(input('Input the number of nodes: '))
items = (int(input(f'Input data for node {i + 1} : ')) for i in range(n))
list(map(CLL.add, items))

print('\nData entered in the list are :')
for i, item in enumerate(items, 1):
    print(f'Data {i} = {item}')

CLL.insert(int(input('Input data to be inserted at the beginning: ')))
CLL.print()
