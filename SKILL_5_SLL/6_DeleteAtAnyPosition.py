""" CODE 6:
Write a program to delete a node as per given position of Singly Linked List.
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

    def delete(self, position: int) -> None:
        if position < 0 or not self.head:
            return None
        if position == 0:
            self.head = self.head.next
        else:
            count = 0
            ref = prev = self.head
            while ref.next and count < position:
                prev = ref
                ref = ref.next
                count += 1
            prev.next = ref.next if count == position else prev.next
            self.tail = self.tail if prev.next else prev


if __name__ == '__main__':
    # Sample input
    LList = SinglyLinkedList()
    for _ in range(int(input())):
        LList.append(int(input()))
    LList.delete(int(input()))

    # Sample Output
    LList.print()
