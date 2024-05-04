/*
 * File         : linked_list.cpp
 * Description  : "Source file for Linked List Data Structure using C++ language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "include/linked_list.hpp"

SingleLinkedList::SingleLinkedList() : headsll{NULL} {}

void SingleLinkedList::push_sll(int data) {
    NodeSLL* node = new NodeSLL;
    node->data = data;
    node->next = headsll;
    headsll = node;
}

void SingleLinkedList::append_sll(int data) {
    if (headsll == NULL) {
        SingleLinkedList::push_sll(data);
        return;
    }
    NodeSLL* node = new NodeSLL;
    node->data = data;
    node->next = NULL;
    NodeSLL* itr = headsll;
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
    NodeSLL* itr = headsll;
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
    NodeSLL* itr = headsll;
    if (index == 0) {
        headsll = headsll->next;
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
    NodeSLL* itr = headsll;
    int count = 0;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void SingleLinkedList::display_sll() {
    if (headsll == NULL) {
        cout << "The Single Linked List is empty!" << endl;
        return;
    }
    NodeSLL* itr = headsll;
    string sllstr;
    while (itr) {
        sllstr += to_string(itr->data);
        if (itr->next)
            sllstr += "-->";
        itr = itr->next;
    }
    cout << sllstr << endl;
}


DoublyLinkedList::DoublyLinkedList() : headdll{NULL} {}

void DoublyLinkedList::push_dll(int data) {
    NodeDLL* node = new NodeDLL;
    node->data = data;
    node->next = headdll;
    node->prev = NULL;
    if (headdll != NULL)
        headdll->prev = node;
    headdll = node;
}

void DoublyLinkedList::append_dll(int data) {
    if (headdll == NULL) {
        push_dll(data);
        return;
    }
    NodeDLL* node = new NodeDLL;
    node->data = data;
    node->next = NULL;
    NodeDLL* itr = headdll;
    while (itr->next) {
        itr = itr->next;
    }
    itr->next = node;
    node->prev = itr;
}

void DoublyLinkedList::insert_dll(int data, int index) {
    if ((index < 0) || (index > DoublyLinkedList::get_length_dll())) {
        cout << "Invalid Index!!" << endl;
        return;
    }
    NodeDLL* node = new NodeDLL;
    node->data = data;
    NodeDLL* itr = headdll;
    int count = 0;
    while (itr) {
        if (count == index - 1) {
            node->next = itr->next;
            node->prev = itr;
            itr->next->prev = node;
            itr->next = node;
            break;
        }
        itr = itr->next;
        count++;
    }
}

void DoublyLinkedList::remove_dll(int index) {
    if ((index < 0) || (index > DoublyLinkedList::get_length_dll())) {
        cout << "Invalid Index!" << endl;
        return;
    }
    NodeDLL* itr = headdll;
    if (index == 0) {
        headdll = headdll->next;
        headdll->prev = NULL;
        delete(itr);
        return;
    }
    int count = 0;
    while (itr) {
        if (count == index - 1) {
            NodeDLL* node = itr->next;
            itr->next = itr->next->next;
            itr->next->prev = itr;
            delete(node);
            break;
        }
        itr = itr->next;
        count++;
    }
}

int DoublyLinkedList::get_length_dll() {
    NodeDLL* itr = headdll;
    int count = 0;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void DoublyLinkedList::display_dll() {
    if (headdll == NULL) {
        cout << "The Doubly Linked List is empty!" << endl;
        return;
    }
    NodeDLL* itr = headdll;
    string dllstr;
    while (itr) {
        dllstr += to_string(itr->data);
        if (itr->next)
            dllstr += "-->";
        itr = itr->next;
    }
    cout << dllstr << endl;
}

void DoublyLinkedList::display_rev_dll() {
    if (headdll == NULL) {
        cout << "The Doubly Linked List is empty!" << endl;
        return;
    }
    NodeDLL* itr = headdll;
    string rdllstr;
    while (itr->next) {
        itr = itr->next;
    }
    while (itr) {
        rdllstr += to_string(itr->data);
        if (itr->prev)
            rdllstr += "<--";
        itr = itr->prev;
    }
    cout << rdllstr << endl;
}