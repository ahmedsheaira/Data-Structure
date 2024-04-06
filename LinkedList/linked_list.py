class NodeSLL:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class SingleLinkedList:
    def __init__(self):
        self.head = None

    def push_sll(self, data):
        node = NodeSLL(data, self.head)
        self.head = node

    def append_sll(self, data):
        if self.head is None:
            self.head = NodeSLL(data, None)
            return

        itr = self.head
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
        itr = self.head

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
            self.head = self.head.next
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                itr.next = itr.next.next
                break

            itr = itr.next
            count += 1

    def get_length_sll(self):
        count = 0
        itr = self.head
        while itr:
            count += 1
            itr = itr.next

        return count

    def display_sll(self):
        if self.head is None:
            print("Linked List is empty!\n")
            return

        itr = self.head
        sllstr = ''
        while itr:
            sllstr += str(itr.data) + '-->' if itr.next else str(itr.data)
            itr = itr.next

        print(f"The Single Linked List: {sllstr}")