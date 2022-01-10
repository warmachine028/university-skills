""" CODE 4:
Implement Queue operations using Python language.

"""
import math
from typing import Any


class Queue:
    def __init__(self, capacity: int = None):
        self.capacity = capacity if capacity is not None else math.inf
        self._array: list[Any] = []
        self.front = self.rear=0
    
    def is_full(self) -> bool:
        return self.rear == self.capacity
    
    def is_empty(self) -> bool:
        return self.rear == self.front
    
    def enqueue(self, item: Any) -> int:
        if self.is_full(): return -1
        self._array.append(item)
        self.rear += 1
        return 0
    
    def dequeue(self) -> int | Any:
        if self.is_empty(): return -1
        deleted_item = self._array[self.front]
        self.front += 1
        return deleted_item
    
    def peek(self) -> str:
        if self.is_empty(): return "QUEUE EMPTY"
        return str(self._array[self.front])
    
    def __str__(self):
        if self.is_empty(): return "QUEUE EMPTY"
        if self.front >= self.capacity: return "X -> " * int(self.capacity)
        return " -> ".join(map(str, self._array[self.front:]))


if __name__ == '__main__':
    q = Queue(5)
    q.enqueue(12)
    q.enqueue(13)
    q.enqueue(14)
    # q.dequeue()
    # q.dequeue()
    # q.dequeue()
    # q.dequeue()
    q.enqueue(10)
    for i in range(10): q.dequeue()
    print(q)
