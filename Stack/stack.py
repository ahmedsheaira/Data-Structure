class NodeStack:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class Stack:
    def __init__(self):
        self.top = None

    def push_stack(self, data):
        if self.top is None:
            node = NodeStack(data, None)
            self.top = node
            return
        node = NodeStack(data, self.top)
        self.top = node

    def pop_stack(self):
        self.top = self.top.next

    def peek_stack(self):
        return self.top.data

    def get_length_stack(self):
        count = 0
        itr = self.top
        while itr:
            count += 1
            itr = itr.next

        return count

    def display_stack(self):
        if self.top is None:
            print("The Stack is empty!\n")
            return
        itr = self.top
        sstr = ''
        while itr:
            sstr += str(itr.data) + '-->' if itr.next else str(itr.data)
            itr = itr.next

        print(f"The Stack: {sstr}")


if __name__ == '__main__':
    print("This is Stack based Linked List Data Structure demo!!\n")
    s = Stack()
    s.push_stack(14)
    s.push_stack(4)
    s.display_stack()
    print(f"The top element of the stack is {s.peek_stack()}")
    print(f"The length of the Stack is {s.get_length_stack()}\n")
    s.push_stack(25)
    s.push_stack(40)
    s.display_stack()
    print(f"The top element of the stack is {s.peek_stack()}")
    print(f"The length of the Stack is {s.get_length_stack()}\n")
    s.pop_stack()
    s.display_stack()
    print(f"The top element of the stack is {s.peek_stack()}")
    print(f"The length of the Stack is {s.get_length_stack()}\n")
    s.pop_stack()
    s.display_stack()
    print(f"The top element of the stack is {s.peek_stack()}")
    print(f"The length of the Stack is {s.get_length_stack()}\n")
    s.pop_stack()
    s.display_stack()
    print(f"The top element of the stack is {s.peek_stack()}")
    print(f"The length of the Stack is {s.get_length_stack()}\n")
