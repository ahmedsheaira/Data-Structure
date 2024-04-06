#include "include/linked_list.hpp"

SingleLinkedList::SingleLinkedList() {
    head = NULL;
}

void SingleLinkedList::push_sll(int data) {
    NodeSLL* node = new NodeSLL;
    node->data = data;
    node->next = head;
    head = node;
}

void SingleLinkedList::append_sll(int data) {
    if (head == NULL) {
        SingleLinkedList::push_sll(data);
        return;
    }
    NodeSLL* node = new NodeSLL;
    node->data = data;
    node->next = NULL;
    NodeSLL* itr = head;
    while (itr->next) {
        itr = itr->next;
    }
    itr->next = node;
}

void SingleLinkedList::insert_sll(int data, int index) {
    if ((index < 0) || index > SingleLinkedList::get_length_sll()) {
        cout << "Invalid Index!" << endl;
        return;
    }
    if (index == 0) {
        SingleLinkedList::push_sll(data);
    }
    NodeSLL* node = new NodeSLL;
    node->data = data;
    int count = 0;
    NodeSLL* itr = head;
    while (itr) {
        if (count == index - 1) {
            node->next = itr->next;
            itr->next = node;
            break;
        }
        itr = itr->next;
        count++;
    }
}

void SingleLinkedList::remove_sll(int index) {
    if ((index < 0) || index > SingleLinkedList::get_length_sll()) {
        cout << "Invalid Index!" << endl;
        return;
    }
    NodeSLL* itr = head;
    if (index == 0) {
        head = head->next;
        delete(itr);
        return;
    }
    int count = 0;
    while (itr) {
        if (count == index - 1) {
            NodeSLL* node = itr->next;
            itr->next = itr->next->next;
            delete(node);
            break;
        }
        itr = itr->next;
        count++;
    }
}

int SingleLinkedList::get_length_sll() {
    NodeSLL* itr = head;
    int count = 0;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void SingleLinkedList::display_sll() {
    if (head == NULL) {
        cout << "The Single Linked List is empty!" << endl;
        return;
    }
    NodeSLL* itr = head;
    string sllstr;
    while (itr) {
        sllstr += to_string(itr->data);
        if (itr->next)
            sllstr += "-->";
        itr = itr->next;
    }
    cout << sllstr << endl;
}
