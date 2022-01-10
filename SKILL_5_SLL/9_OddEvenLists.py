""" CODE 9:
Write a program in which contain singly linked list whose elements are type integer.
Now break these linked list into two linked list and one list contain all even node and another contain all odd node.
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


def separate_lists(head: Optional[Node]) -> SinglyLinkedList:
    odds = SinglyLinkedList()
    evens = SinglyLinkedList()
    while head:
        (odds if head.data % 2 else evens).append(head.data)
        head = head.next
    evens.tail.next = odds.head
    return evens


if __name__ == '__main__':
    # Sample input
    LinkedList = SinglyLinkedList()
    inputs = map(int, input("Original Linked List\n").split())
    list(map(LinkedList.append, inputs))

    # Sample Output
    print('Modified Linked List')
    separate_lists(LinkedList.head).print()
