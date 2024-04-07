#include "include/stack.hpp"

Stack::Stack() {
    top = NULL;
}

void Stack::push_stack(int data) {
    NodeStack* node = new NodeStack;
    node->data = data;
    if (top == NULL) {
        node->next = NULL;
        top = node;
        return;
    }
    node->next = top;
    top = node;
}

void Stack::pop_stack() {
    NodeStack* itr = top;
    top = top->next;
    delete(itr);
}

int Stack::peek_stack() {
    return top->data;
}

int Stack::get_length_stack() {
    int count = 0;
    NodeStack* itr = top;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void Stack::display_stack() {
    if (top == NULL) {
        cout << "The stack is empty!" << endl;
        return;
    }
    NodeStack* itr = top;
    string sstr;
    while (itr) {
        sstr += to_string(itr->data);
        if (itr->next)
            sstr += "-->";
        itr = itr->next;
    }
    cout << sstr << endl;
}
