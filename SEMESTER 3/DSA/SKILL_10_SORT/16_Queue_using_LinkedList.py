"""CODE 16:
Write a program for queue representation using Linked List.
   i) Insert
  ii) Delete (Display "Queue is empty" if queue is empty).
 iii) Display (Display "NULL" if queue is empty).
  iv) Exit
"""


class Node:
    def __init__(self, data, nxt=None):
        self.data = data
        self.next = nxt


class Queue:
    def __init__(self, size):
        self.head = None
        self.size = size
        self.top = -1
        self.tail = None

    def enqueue(self):
        if self.top > self.size:
            return
        temp = Node(input())
        if not self.head:
            self.head = temp
        else:
            self.tail.next = temp
        self.tail = temp
        self.top += 1

    def dequeue(self):
        if not self.head:
            print("Queue is empty")
            return
        if self.head.next:
            self.head = self.head.next
        else:
            self.head = None

    def __str__(self):
        if not self.head:
            return "NULL"
        q = ""
        ref = self.head
        while ref:
            q += f"->{ref.data}"
            ref = ref.next
        return q


que = Queue(10)
choice = -1
while choice != 4:
    choice = int(input())
    if choice == 1:
        que.enqueue()
    elif choice == 2:
        que.dequeue()
    elif choice == 3:
        print(que)
    else:
        break
