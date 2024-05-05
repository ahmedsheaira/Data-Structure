/*
 * File         : queue.cpp
 * Description  : "Source file for Queue Data Structure based on Single Linked List using C++ language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "include/queue.h"

void enqueue(int data, struct Queue* queue) {
    struct NodeQueue* node = (struct NodeQueue*)malloc(sizeof(struct NodeQueue));
    node->data = data;
    node->next = NULL;
    if (queue->tail == NULL) {
        queue->head = queue->tail = node;
        return;
    }
    queue->tail->next = node;
    queue->tail = node;
}

void dequeue(struct Queue* queue) {
    if (queue->head == NULL)
        return;
    struct NodeQueue* itr = queue->head;
    queue->head = queue->head->next;
    if (queue->head == NULL)
        queue->tail = NULL;
    free(itr);
}

int peek_queue(struct Queue* queue) {
    return queue->head->data;
}

int get_length_queue(struct Queue* queue) {
    int count = 0;
    struct NodeQueue* itr = queue->head;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void display_queue(struct Queue* queue) {
    if (queue->head == NULL) {
        printf("The Queue is empty!\n");
        return;
    }
    struct NodeQueue* itr = queue->head;
    while (itr) {
        printf("%d", itr->data);
        if (itr->next)
            printf("-->");
        itr = itr->next;
    }
    printf("\n");
}
