""" CODE 8:
Write a Program to reverse a linked list.
"""
from dataclasses import dataclass
from typing import Optional


@dataclass
class Node:
    data: int
    next: Optional['Node'] = None


class SinglyLinkedList:
    head: Optional[Node] = None
    tail: Node

    def append(self, data: int) -> None:
        new_node = Node(data)
        if not self.head:
            self.head = new_node
        else:
            self.tail.next = new_node
        self.tail = new_node

    def print(self) -> None:
        ref = self.head
        while ref:
            print(f"{ref.data}", end=' ')
            ref = ref.next

    def reverse(self):
        ref, prev = self.head, None
        while ref:
            nxt = ref.next
            ref.next = prev
            prev, ref = ref, nxt
        self.tail = self.head
        self.head = prev


if __name__ == '__main__':
    # Sample input
    for _ in range(int(input())):
        LList = SinglyLinkedList()
        for _ in range(int(input())):
            LList.append(int(input()))
        LList.reverse()
        # Sample Output
        LList.print()
