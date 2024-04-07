#pragma once
#include <iostream>
#include <string>

using namespace std;

class NodeQueue {
public:
    int data;
    NodeQueue* next;
};

class Queue {
private:
    NodeQueue* head;
    NodeQueue* tail;
public:
    Queue();
    void enqueue(int data);
    void dequeue();
    int peek_queue();
    int get_length_queue();
    void display_queue();
};