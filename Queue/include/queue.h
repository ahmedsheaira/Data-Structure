/*
 * File         : queue.h
 * Description  : "Header file for Queue Data Structure based on Single Linked List using C language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include <stdio.h>
#include <stdlib.h>

struct NodeQueue {
    int data;
    struct NodeQueue* next;
};

struct Queue {
    struct NodeQueue* head;
    struct NodeQueue* tail;
};

void enqueue(int data, struct Queue* queue);
void dequeue(struct Queue* queue);
int peek_queue(struct Queue* queue);
int get_length_queue(struct Queue* queue);
void display_queue(struct Queue* queue);
