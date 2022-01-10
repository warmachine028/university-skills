""" CODE 5:
Implement Stack operations using Python language

"""
import math
from typing import Any


class Stack:
    def __init__(self, capacity: int = None):
        self.capacity = capacity if capacity is not None else math.inf
        self._array: list[Any] = []
    
    def is_full(self) -> bool:
        return len(self._array) == self.capacity
    
    def is_empty(self) -> bool:
        return not len(self._array)
    
    def push(self, item: Any) -> int:
        if self.is_full(): return -1  # Overflow Condition
        self._array.append(item)
        return 0
    
    def pop(self) -> int | Any:
        return -1 if self.is_empty() else self._array.pop()  # Underflow Condition handled
    
    def peek(self) -> str:
        return 'STACK EMPTY' if self.is_empty() else self._array[-1]
    
    def __str__(self):
        if self.is_empty(): return "STACK EMPTY"
        return " -> ".join(map(str, self._array))


s = Stack(0)
print(s)
s.push(99)
s.push(89)
s.push(89)
s.push(89)
print(' STACK'.center(8), s, sep='\n')
s.pop()
print(s)
