""" CODE 2:
Write a menu program for following operation of Singly Linked List to Insert a node at beginning.Given a
pointer to the head of a linked list, insert a new node before the head. The next value in the new node should point
to head and the data value should be replaced with a given value. Return a reference to the new head of the list. The
head pointer given may be null meaning that the initial list is empty.
"""
from dataclasses import dataclass
from typing import Optional


@dataclass
class Node:
    data: int
    next: Optional['Node'] = None


class SinglyLinkedList:
    @staticmethod
    def print(ref: Optional[Node]) -> None:
        while ref:
            print(ref.data)
            ref = ref.next

    @staticmethod
    def insert_node_at_head(_head: Optional[Node], data: int) -> Node:
        return Node(data, _head)  # new head


if __name__ == '__main__':
    # Sample input
    LList = SinglyLinkedList()
    head: Optional[Node] = None
    for _ in range(int(input())):
        head = LList.insert_node_at_head(head, int(input()))

    # Sample Output
    print()
    LList.print(head)
