""" CODE 7:
Write a program to delete last node of Singly Linked.

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
        print('The list contains:', end=' ')
        ref = self.head
        while ref:
            print(f"{ref.data}", end=' ')
            ref = ref.next

    def pop(self) -> Optional[Node]:
        if not self.head:
            return None
        if self.head.next:
            ref = prev = self.head
            while ref.next:
                prev = ref
                ref = ref.next
            prev.next = None
            self.tail = prev
            return ref
        self.head = None
        return None


if __name__ == '__main__':
    # Sample input
    LList = SinglyLinkedList()
    inputs = map(int, input('The list contains: ').split())
    list(map(LList.append, inputs))
    LList.pop()

    # Sample Output
    LList.print()
