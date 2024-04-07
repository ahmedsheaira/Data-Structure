#pragma once
#include <iostream>
#include <string>

using namespace std;

class NodeStack {
public:
    int data;
    NodeStack* next;
};

class Stack {
private:
    NodeStack* top;
public:
    Stack();
    void push_stack(int data);
    void pop_stack();
    int peek_stack();
    int get_length_stack();
    void display_stack();

};