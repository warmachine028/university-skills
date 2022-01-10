""" CODE 3:
Write a menu program for following operation of Singly Linked List to Insert a node at beginning.
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
    def print(ref: Optional[Node]) -> None:
        while ref:
            print(ref.data, end=' ')
            ref = ref.next
        print()

    @staticmethod
    def insert_node_at_position(_head: Optional[Node],
                                data: int,
                                position: int) -> Optional[Node]:
        # Can't Insert in negative Index
        if position < 0:
            return _head

        temp = Node(data)
        if _head is None:
            _head = temp if position == 0 else None  # First item in empty list
        elif position == 0:  # Insertion at first Position
            temp.next, _head = _head, temp
        else:  # Inserting in any position
            counter = 0
            ref = prev = _head
            while ref.next and counter < position:
                prev, ref = ref, ref.next
                counter += 1
            # Inserting in any position
            if counter == position:
                prev.next, temp.next = temp, ref
            # Inserting in last position
            elif counter + 1 == position and ref.next is None:
                ref.next = temp
        return _head


if __name__ == '__main__':
    # Sample input
    LList = SinglyLinkedList()
    head: Optional[Node] = None
    for _ in range(int(input())):
        head = LList.append(head, int(input()))
    head = LList.insert_node_at_position(head, int(input()), int(input()))

    # Sample Output
    LList.print(head)
