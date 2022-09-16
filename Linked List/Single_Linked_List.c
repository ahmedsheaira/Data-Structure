//
//  main.c
//  Single Linked List
//
//  Created by Ahmed Sheaira on 09/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head, int data)
{
    // Allocate new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    // Assign the new data to the new node
    node->data = data;
    // Make the next of the new node as a head
    node->next = (*head);
    // Move the heade to point to the new node
    (*head) = node;
}

void append(struct Node** head, int data)
{
    // Allocate the new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    // Assign  the new data to the new node
    node->data = data;
    // Make the next of the new node as NULL
    node->next = NULL;
    // check if the linked list is empty or not
    struct Node* itr = *head;
    if (*head == NULL)
    {
        (*head) = node;
        return;
    }
    // Traverse till the last node
    while (itr->next != NULL) {
        itr = itr->next;
    }
    // Change the next of the last node to new node
    itr->next = node;
}

void insert(struct Node** head, int data, int index)
{
    // Check if the linked list is empty or index is 0
    if (((*head) == NULL) || (index == 0)) {
        push(head, data);
        return;
    }
    int i = 0;
    struct Node* prev = (*head);
    // Travesr till find the previous node
    while (i != (index - 1)) {
        prev = prev->next;
        i++;
    }
    // Check if the previous node is the last node or not
    if ((prev->next) == NULL) {
        append(&prev, data);
        return;
    }
    else {
        // Alloate the new node
        struct Node* node = (struct Node*) malloc(sizeof(struct Node));
        node->data = data;
        node->next = prev->next;
        prev->next = node;
    }
}

void delete(struct Node** head, int pos)
{
    int i = 1;
    struct Node* itr = (*head);
    struct Node* prev = (*head);
    if ((*head) == NULL) {
        printf("The linked list is empty!");
        return;
    }
    if (pos == 1) {
        (*head) = (*head)->next;
        free(itr);
    }
    else
    {
        while (i< (pos - 1)) {
            prev = prev->next;
            i++;
        }
        itr = prev->next;
        prev->next = itr->next;
        free(itr);
    }
}

void deleteNode(struct Node** head, int val) {
    struct Node* itr = (*head);
    struct Node* prev = (*head);
    // Check if the linked list is empty or not
    if (itr == NULL) {
        printf("The Linked List is empty!");
        return;
    }
    // Check is the value in the first element in the linked list or not
    if ((itr != NULL) && (itr->data == val)) {
        // Make the second node as head
        (*head) = itr->next;
        // Delete the element using free memory
        free(itr);
        return;
    }
    // Travese till find the node that has the value
    while ((itr != NULL) && (itr->data != val)) {
        prev = itr;
        itr = itr->next;
    }
    // Check if travese all node and not found the element
    if (itr == NULL) {
        printf("The element %d is not found in the linked list!!", val);
        return;
    }
    // Check if we found the searching element
    if (itr->data == val) {
        // Unlink the node from the linked list
        prev->next = itr->next;
        // Remove the node by using the free memory
        free(itr);
        return;
    }
}

void print_list(struct Node* node)
{
    // Traverse till the last node
    while (node != NULL)
    {
        // Print the data in the current node
        printf("%d", node->data);
        // Jump to the next node
        if (node->next != NULL)
            printf(" -> ");
        node = node->next;
    }
    printf(" -> NULL\n");
}

int main() {
    struct Node* head = NULL;
    push(&head, 5);
    push(&head, 10);
    append(&head, 51);
    print_list(head);
    insert(&head, 20, 2);
    print_list(head);
    delete(&head, 3);
    print_list(head);
    return 0;
}
