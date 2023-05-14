# CODE 21: Write a program to input two queues and compare their contents.

from typing import Callable, Union, Optional


class LIFO:
    def __init__(self, capacity: int = None) -> None:
        self.capacity: Optional[int] = capacity
        self.array: list = []
        self.isEmpty: Callable[[], bool] = lambda: len(self.array) == 0
        self.isFull: Callable[[], bool] = lambda: self.capacity == len(self.array)
        self.display: Callable[[], None] = lambda: print(
            "QUEUE EMPTY" if self.isEmpty() else self.array
        )

        self.peek: Callable[[], Union[str, int]] = (
            lambda: "QUEUE EMPTY" if self.isEmpty else self.array[len(self.array)]
        )

    def enqueue(self, item: int) -> None:
        if self.isFull():
            print("QUEUE OVERFLOW")

        else:
            self.array.append(item)

    def dequeue(self) -> None:
        if not self.isEmpty():
            print("QUEUE UNDERFLOW")
        else:
            self.array.pop(0)


def compare(queue1: list[int], queue2: list[int]) -> None:
    if len(queue1) != len(queue2):
        print("Can't compare queues of dissimilar sizes")
    else:
        for i in range(len(queue1)):
            print(f"{queue1[i]} {'==' if queue1[i] == queue2[i] else '!='} {queue2[i]}")


cap1: int = 5
que1: LIFO = LIFO(cap1)
que1.enqueue(2)
que1.enqueue(3)
que1.enqueue(4)
que1.enqueue(1)
que1.enqueue(5)


cap2: int = 5
que2: LIFO = LIFO(cap2)
que2.enqueue(2)
que2.enqueue(4)
que2.enqueue(4)
que2.enqueue(1)
que2.enqueue(5)

compare(que1.array, que2.array)
