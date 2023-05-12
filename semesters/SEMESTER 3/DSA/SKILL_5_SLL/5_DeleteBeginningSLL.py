"""CODE 5:
Write a program to delete a node at beginning of Singly Linked List.
Given a linked list, the task is to remove the first node of the linked list and
update the head pointer of the linked list.
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
            print(f"{ref.data} ->", end=' ')
            ref = ref.next
        print('NULL')

    def remove(self) -> None:
        if self.head:
            self.head = nxt if (nxt := self.head.next) else None


if __name__ == '__main__':
    # Sample input
    LList = SinglyLinkedList()
    inputs = map(int, input().split(' -> ')[:-1])
    list(map(LList.append, inputs))
    LList.remove()

    # Sample Output
    LList.print()
