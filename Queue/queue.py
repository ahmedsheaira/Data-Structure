class NodeQueue:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class Queue:
    def __init__(self):
        self.head = self.tail = None

    def enqueue(self, data):
        if (self.head is None) and (self.tail is None):
            node = NodeQueue(data)
            self.head = self.tail = node
            return

        node = NodeQueue(data)
        self.tail.next = node
        self.tail = node

    def dequeue(self):
        self.head = self.head.next

    def peek_queue(self):
        return self.head.data

    def get_length_queue(self):
        count = 0
        itr = self.head
        while itr:
            count += 1
            itr = itr.next

        return count

    def display_queue(self):
        if self.head is None:
            print("The Queue is empty!\n")
            return

        itr = self.head
        qstr = ''
        while itr:
            qstr += str(itr.data) + '-->' if itr.next else str(itr.data)
            itr = itr.next

        print(f"The Queue: {qstr}")


if __name__ == '__main__':
    print("This is the Queue Data Structure based on Linked List demo!!\n")
    q = Queue()
    q.enqueue(10)
    q.display_queue()
    print(f"The length of the Queue is {q.get_length_queue()}")
    print(f"The head of the Queue: {q.peek_queue()}\n")
    q.enqueue(30)
    q.display_queue()
    print(f"The length of the Queue is {q.get_length_queue()}")
    print(f"The head of the Queue: {q.peek_queue()}\n")
    q.enqueue(3)
    q.display_queue()
    print(f"The length of the Queue is {q.get_length_queue()}")
    print(f"The head of the Queue: {q.peek_queue()}\n")
    q.dequeue()
    q.display_queue()
    print(f"The length of the Queue is {q.get_length_queue()}")
    print(f"The head of the Queue: {q.peek_queue()}\n")
