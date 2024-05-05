class NodeSLL:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class SingleLinkedList:
    def __init__(self):
        self.head_sll = None

    def push_sll(self, data):
        node = NodeSLL(data, self.head_sll)
        self.head_sll = node

    def append_sll(self, data):
        if self.head_sll is None:
            self.head_sll = NodeSLL(data, None)
            return

        itr = self.head_sll
        while itr.next:
            itr = itr.next

        itr.next = NodeSLL(data, None)

    def insert_sll(self, data, index):
        if (index < 0) or (index > self.get_length_sll()):
            raise Exception("Invalid Index")

        if index == 0:
            self.push_sll(data)
            return

        count = 0
        itr = self.head_sll

        while itr:
            if count == index - 1:
                node = NodeSLL(data, itr.next)
                itr.next = node
                break

            itr = itr.next
            count += 1

    def remove_sll(self, index):
        if (index < 0) or (index > self.get_length_sll()):
            raise Exception("Invalid Index")

        if index == 0:
            self.head_sll = self.head_sll.next
            return

        count = 0
        itr = self.head_sll
        while itr:
            if count == index - 1:
                itr.next = itr.next.next
                break

            itr = itr.next
            count += 1

    def get_length_sll(self):
        count = 0
        itr = self.head_sll
        while itr:
            count += 1
            itr = itr.next

        return count

    def display_sll(self):
        if self.head_sll is None:
            print("Linked List is empty!\n")
            return

        itr = self.head_sll
        sllstr = ''
        while itr:
            sllstr += str(itr.data) + '-->' if itr.next else str(itr.data)
            itr = itr.next

        print(f"The Single Linked List: {sllstr}")


class NodeDLL:
    def __init__(self, data=None, next=None, prev=None):
        self.data = data
        self.next = next
        self.prev = prev


class DoublyLinkedList:
    def __init__(self):
        self.head_dll = None

    def push_dll(self, data):
        node = NodeDLL(data, self.head_dll, None)
        if self.head_dll is not None:
            self.head_dll.prev = node
        self.head_dll = node

    def append_dll(self, data):
        if self.head_dll is None:
            self.head_dll = NodeDLL(data)
            return
        itr = self.head_dll
        while itr.next:
            itr = itr.next
        itr.next = NodeDLL(data, None, itr)

    def insert_dll(self, data, index):
        if (index < 0) or (index > self.get_length_dll()):
            raise Exception("Invalid Index")

        if index == 0:
            self.push_dll(data)
            return

        count = 0
        itr = self.head_dll
        while itr:
            if count == index - 1:
                node = NodeDLL(data, itr.next, itr)
                itr.next = node
                if itr.next.next:
                    itr.next.next.prev = node
                break
            itr = itr.next
            count += 1


    def remove_dll(self, index):
        if (index < 0) or (index > self.get_length_dll()):
            raise Exception("Invalid Index")

        if index == 0:
            self.head_dll = self.head_dll.next
            self.head_dll.prev = None

        itr = self.head_dll
        count = 0
        while itr:
            if count == index - 1:
                itr.next = itr.next.next
                itr.next.prev = itr
                break
            itr = itr.next
            count += 1

    def get_length_dll(self):
        count = 0
        itr = self.head_dll
        while itr:
            count += 1
            itr = itr.next
        return count

    def display_dll(self):
        if self.head_dll is None:
            print("The Doubly Linked List is empty!\n")
            return

        itr = self.head_dll
        dllstr = ''
        while itr:
            dllstr += str(itr.data) + '-->' if itr.next else str(itr.data)
            itr = itr.next
        print(f"The Doubly Linked List: {dllstr}")

    def display_rev_dll(self):
        if self.head_dll is None:
            print("The Doubly linked List is empty!\n")
            return

        itr = self.head_dll
        rdllstr = ''
        while itr.next:
            itr = itr.next
        while itr:
            rdllstr += str(itr.data) + '<--' if itr.prev else str(itr.data)
            itr = itr.prev
        print(f"The reverse Doubly Linked List: {rdllstr}")


if __name__ == '__main__':
    print("This is Single Linked List demo!!\n")
    sll = SingleLinkedList()
    sll.append_sll(4)
    sll.display_sll()
    print(f"The length of the Single Linked List is {sll.get_length_sll()}\n")
    sll.push_sll(10)
    sll.push_sll(20)
    sll.display_sll()
    print(f"The length of the Single Linked List is {sll.get_length_sll()}\n")
    sll.append_sll(43)
    sll.append_sll(28)
    sll.display_sll()
    print(f"The length of the Single Linked List is {sll.get_length_sll()}\n")
    sll.insert_sll(6, 3)
    sll.display_sll()
    print(f"The length of the Single Linked List is {sll.get_length_sll()}\n")
    sll.remove_sll(3)
    sll.display_sll()
    print(f"The length of the Single Linked List is {sll.get_length_sll()}\n")
    sll.insert_sll(16, 5)
    sll.display_sll()
    print(f"The length of the Single Linked List is {sll.get_length_sll()}\n")
    sll.remove_sll(4)
    sll.display_sll()
    print(f"The length of the Single Linked List is {sll.get_length_sll()}\n")
    print("-----------------------------------------------------------------")
    dll = DoublyLinkedList()
    dll.append_dll(4)
    dll.display_dll()
    print(f"The length of the Doubly Linked List is {dll.get_length_dll()}\n")
    dll.push_dll(10)
    dll.push_dll(20)
    dll.display_dll()
    print(f"The length of the Doubly Linked List is {dll.get_length_dll()}\n")
    dll.append_dll(43)
    dll.append_dll(28)
    dll.display_dll()
    print(f"The length of the Doubly Linked List is {dll.get_length_dll()}\n")
    dll.insert_dll(6, 3)
    dll.display_dll()
    print(f"The length of the Doubly Linked List is {dll.get_length_dll()}\n")
    dll.remove_dll(3)
    dll.display_dll()
    print(f"The length of the Doubly Linked List is {dll.get_length_dll()}\n")
    dll.insert_dll(16, 5)
    dll.display_dll()
    print(f"The length of the Doubly Linked List is {dll.get_length_dll()}\n")
    dll.remove_dll(4)
    dll.display_dll()
    print(f"The length of the Doubly Linked List is {dll.get_length_dll()}\n")
    dll.display_rev_dll()
