""" CODE 4:
Write a menu program for following operation of Circular Linked List to Insert a node
at the last of the linked list.
"""

from dataclasses import dataclass


@dataclass
class Node:
    data: int
    next = None


class CircularLinkedList:
    head = None
    tail: 'Node'

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
        while True:
            print(ref.data)
            ref = ref.next
            if ref is self.head:
                return


# __main__
CLL = CircularLinkedList()
n = int(input('Input the number of nodes: '))
items = [input(f'Input data for node {i + 1} : ') for i in range(n)]

print('\nData entered in the list are :')
for idx, item in enumerate(items, 1):
    CLL.append(int(item))
    print(f'Data {idx} = {item}')

element = int(input(f'Input data to be inserted at the end: '))
CLL.append(element)
CLL.print()
