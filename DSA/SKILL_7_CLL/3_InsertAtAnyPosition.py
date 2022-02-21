""" CODE 3:
Write a menu program for following operation of Circular singly Linked List to Insert a
node as per given position.
"""
from dataclasses import dataclass


@dataclass
class Node:
    data: int
    next = None


class CircularLinkedList:
    head = None
    tail: 'Node'

    def insert_any(self, data, index):
        if index < 0:
            return
        temp = Node(data)
        if index == 0:
            # Inserting at 1st position
            if self.head:
                temp.next = self.head
                self.head = self.tail.next = temp
            # Inserting at empty list
            else:
                self.head = self.tail = temp
                temp.next = self.head

        else:
            ref = self.head
            count = 1
            while count < index:
                ref = ref.next
                if ref is self.head:
                    break
                count += 1
            if count == index:
                temp.next = ref.next
                ref.next = temp
            self.tail = temp if temp.next is self.head else self.tail

    def print(self, string):
        ref = self.head
        if not ref:
            return
        print(string)
        count = 1
        while True:
            print(f'Data {count} = {ref.data}')
            ref = ref.next
            if ref is self.head:
                return
            count += 1


# __main__
CLL = CircularLinkedList()
n = int(input('Input the number of nodes: '))
items = [input(f'Input data for node {i + 1} : ') for i in range(n)]
for i, element in enumerate(items):
    CLL.insert_any(int(element), i)

CLL.print('\nData entered in the list are :')

pos = int(input('Input the position to insert a new node: '))
item = int(input(f'Input data for the position {pos} : '))
CLL.insert_any(item, pos - 1)  # since index = position - 1
CLL.print('\nAfter insertion the new list are :')
