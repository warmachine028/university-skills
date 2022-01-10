""" CODE 1:
Write a program to create a singly linked list. Given a pointer 
to the head node of a linked list, print each node's data element, one per line. If the head pointer is null
(indicating the list is empty), there is nothing to print.
"""
from dataclasses import dataclass
from typing import Optional


@dataclass
class Node:
    data: int
    next: Optional['Node'] = None


class SinglyLinkedList:
    @staticmethod
    def append(_head: Optional[Node], data: int) -> Node:
        temp = Node(data)
        if _head is None:
            _head = temp
        else:
            ref: Node = _head
            while ref.next:
                ref = ref.next
            ref.next = temp
        return _head

    @staticmethod
    def print_linked_list(ref: Optional[Node]) -> None:
        while ref:
            print(ref.data)
            ref = ref.next


if __name__ == '__main__':
    # Sample input
    LList = SinglyLinkedList()
    head: Optional[Node] = None
    for _ in range(int(input())):
        head = LList.append(head, int(input()))

    # Sample Output
    LList.print_linked_list(head)
