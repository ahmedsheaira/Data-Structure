//
//  main.c
//  Double Linked List
//
//  Created by Ahmed Sheaira on 10/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(struct Node** head, int data) {
    // Allocate the new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    // Assign the new data to the new node
    node->data = data;
    // Make the next of the new node as head
    node->next = (*head);
    // Make the previous of the new node as NULL
    node->prev = NULL;
    // change the previous of the head node to the new node
    if ((*head) != NULL) {
        (*head)->prev = node;
    }
    // Move the head to point to the new node
    (*head) = node;
}

void append(struct Node** head, int data) {
    // Allocate the new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    // Assign the new date to the new node
    node->data = data;
    // Make the next of the new node as NULL
    node->next = NULL;
    // Check the linked list is empty or not
    struct Node* itr = (*head);
    if ((*head) == NULL) {
        node->prev = NULL;
        (*head) = node;
        return;
    }
    // Travese till the last node
    while ((itr->next) != NULL) {
        itr = itr->next;
    }
    // Change the next of the last node to the new node
    itr->next = node;
    // Make the last node as previous of the new node
    node->prev = itr;
}

void insert(struct Node** head, int data, int index) {
    // Check of the linked list is empty or not
    if ((*head) == NULL) {
        push(head, data);
        return;
    }
    int i = 0;
    struct Node* prev = (*head);
    // travese till find the previous node
    while (i != (index - 1)) {
        prev = prev->next;
        i++;
    }
    // Cheack if the previous node is the last nodeor not
    if ((prev->next) == NULL) {
        append(head, data);
        return;
    }
    else {
        // Allocate the new node
        struct Node* node = (struct Node*) malloc(sizeof(struct Node));
        // Assign the new data to the new node
        node->data = data;
        // Make the next of the new node as the next node
        node->next = prev->next;
        // Make the prev node as previous of the new node
        node->prev = prev;
        // Make the new node as previous of the next node of the prev node
        prev->next->prev = node;
        // Make the new node as next of the prev node
        prev->next = node;
    }
}

void delete(struct Node** head, int index) {
    // Check if the linked list is empty or not
    if ((*head) == NULL) {
        printf("The linked list is empty!");
        return;
    }
    int i = 0;
    struct Node* itr = (*head);
    struct Node* prev = (*head);
    if (index == 0) {
        (*head) = (*head)->next;
        (*head)->prev = NULL;
        free(itr);
    }
    else {
        while (i != (index - 1)) {
            prev = prev->next;
            i++;
        }
        itr = prev->next;
        itr->next->prev = prev;
        prev->next = itr->next;
        free(itr);
    }
}

void print_list(struct Node* node)
{
    // Check if the linked list is empty or not
    if (node == NULL) {
        printf("The linked list is empty!");
        return;
    }
    // travese and print the data for each node
    while (node != NULL) {
        printf("%d", node->data);
        if ((node->next) != NULL) {
            printf(" -> ");
        }
        node = node->next;
    }
    printf(" -> NULL\n");
}

int main() {
    struct Node* head = NULL;
    push(&head, 20);
    push(&head, 5);
    print_list(head);
    append(&head, 4);
    push(&head, 10);
    append(&head, 50);
    print_list(head);
    insert(&head, 30, 3);
    print_list(head);
    delete(&head, 4);
    print_list(head);
    return 0;
}
