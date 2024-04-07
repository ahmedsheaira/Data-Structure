/*
 * File         : linked_list.cpp
 * Description  : "Source file for Linked List Data Structure using C++ language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "include/linked_list.h"

void push_sll(struct NodeSLL** head, int data) {
    struct NodeSLL* node = (struct NodeSLL*)malloc(sizeof(struct NodeSLL));
    node->data = data;
    node->next = (*head);
    (*head) = node;
}

void append_sll(struct NodeSLL** head, int data) {
    if (*head == NULL) {
        push_sll(head, data);
        return;
    }

    struct NodeSLL* node = (struct NodeSLL*)malloc(sizeof(struct NodeSLL));
    node->data = data;
    node->next = NULL;

    struct NodeSLL* itr = (*head);
    while (itr->next) {
        itr = itr->next;
    }

    itr = node;
}

// void insert_sll(struct NodeSLL** head, int data, int index) {}

// void remove_sll(struct NodeSLL** heda, int index) {}

int get_length_sll(struct NodeSLL* head) {
    int count;
    struct NodeSLL* itr = head;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void display_sll(struct NodeSLL* head) {
    if (head == NULL) {
        printf("The Single Linked List is empty!\n");
        return;
    }
    struct NodeSLL* itr = head;
    while (itr) {
        printf("%d", itr->data);
        if (itr->next)
            printf("-->");
        itr = itr->next;
    }
    printf("\n");
}