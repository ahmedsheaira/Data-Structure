#include "include/queue.hpp"

Queue::Queue() {
    head = tail =  NULL;
}

void Queue::enqueue(int data) {
    NodeQueue* node = new NodeQueue;
    node->data = data;
    if ((head == NULL) && (tail == NULL)) {
        node->next = NULL;
        head = tail = node;
    }
    tail->next = node;
    tail = node;
}

void Queue::dequeue() {
    NodeQueue* itr = head;
    head = head->next;
    delete(itr);
}

int Queue::peek_queue() {
    return head->data;
}

int Queue::get_length_queue() {
    int count = 0;
    NodeQueue* itr = head;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void Queue::display_queue() {
    if (head == NULL) {
        cout << "The Queue is empty!" << endl;
        return;
    }
    NodeQueue* itr = head;
    string qstr;
    while (itr) {
        qstr += to_string(itr->data);
        if (itr->next)
            qstr += "-->";
        itr = itr->next;
    }
    cout << qstr << endl;
}