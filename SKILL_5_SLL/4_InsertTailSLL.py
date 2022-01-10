""" CODE 4:
Write a menu program for following operation of Singly Linked List to Insert a node at the last of the linked list.
You are given the pointer to the head node of a linked list and an integer to add to the list.

"""

from dataclasses import dataclass
from typing import Optional


@dataclass
class Node:
    data: int
    next: Optional['Node'] = None


class SinglyLinkedList:
    tail: Node  # Address of last node

    @staticmethod
    def print(ref: Optional[Node]) -> None:
        print()
        while ref:
            print(ref.data)
            ref = ref.next

    def insert_node_at_tail(self, _head: Optional[Node], data: int) -> Node:
        new_node = Node(data)
        if _head is None:  # when list is empty
            _head = new_node

        # Optimised Insertion in Constant time
        else:  # Inserting node without traversing n nodes
            self.tail.next = new_node
        # Storing address of last inserted node
        self.tail = new_node
        return _head  # Returning head after linking node


if __name__ == '__main__':
    # Sample input
    LList = SinglyLinkedList()
    head: Optional[Node] = None
    for _ in range(int(input()) + 1):
        head = LList.insert_node_at_tail(head, int(input()))

    # Sample Output
    LList.print(head)
