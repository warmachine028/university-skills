# CODE 19: Write a program to input two stacks and compare their contents.


from typing import Callable, Union, Optional


class FIFO:
    def __init__(self, capacity: int = None) -> None:
        self.capacity: Optional[int] = capacity
        self.array: list = []
        self.isEmpty: Callable[[], bool] = lambda: len(self.array) == 0
        self.isFull: Callable[[], bool] = lambda: self.capacity == len(self.array)
        self.display: Callable[[], None] = lambda: print(
            "STACK EMPTY" if self.isEmpty() else self.array
        )

        self.peek: Callable[[], Union[str, int]] = (
            lambda: "STACK EMPTY" if self.isEmpty else self.array[len(self.array)]
        )

    def push(self, item: int) -> None:
        if self.isFull():
            print("STACK OVERFLOW")

        else:
            self.array.append(item)

    def pop(self) -> None:
        if not self.isEmpty():
            print("STACK UNDERFLOW")
        else:
            self.array.pop()


def compare(stack1: list[int], stack2: list[int]) -> None:
    if len(stack1) != len(stack2):
        print("Can't compare stacks of dissimilar sizes")
    else:
        for i in range(len(stack1)):
            print(f"{stack1[i]} {'==' if stack1[i] == stack2[i] else '!='} {stack2[i]}")


cap1: int = 5
stk1: FIFO = FIFO(cap1)
stk1.push(2)
stk1.push(3)
stk1.push(4)
stk1.push(1)
stk1.push(5)


cap2: int = 5
stk2: FIFO = FIFO(cap2)
stk2.push(2)
stk2.push(4)
stk2.push(4)
stk2.push(1)
stk2.push(5)

compare(stk1.array, stk2.array)
