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

    itr->next = node;
}

void insert_sll(struct NodeSLL** head, int data, int index) {
    if ((index < 0) || (index > get_length_sll(*head))) {
        printf("Invalid Index!\n");
        return;
    }
    if (index == 0) {
        push_sll(head, data);
    }
    struct NodeSLL* node = (struct NodeSLL*)malloc(sizeof(struct NodeSLL));
    node->data  = data;
    int count = 0;
    struct NodeSLL* itr = (*head);
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

void remove_sll(struct NodeSLL** head, int index) {
    if ((index < 0) || (index > get_length_sll(*head))) {
        printf("Invalid Index!\n");
        return;
    }
    struct NodeSLL* itr = (*head);
    if (index == 0) {
        (*head) = (*head)->next;
        free(itr);
        return;
    }
    int count = 0;
    while (itr) {
        if (count == index - 1) {
            struct NodeSLL* node = itr->next;
            itr->next = itr->next->next;
            free(node);
            break;
        }
        itr = itr->next;
        count++;
    }
}

int get_length_sll(struct NodeSLL* head) {
    int count = 0;
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

void push_dll(struct NodeDLL** head, int data) {
    struct NodeDLL* node = (struct NodeDLL*)malloc(sizeof(struct NodeDLL));
    node->data = data;
    node->next = (*head);
    node->prev = NULL;
    if ((*head) != NULL)
        (*head)->prev = node;
    (*head) = node;
}

void append_dll(struct NodeDLL** head, int data){
    if ((*head) == NULL) {
        push_dll(head, data);
        return;
    }
    struct NodeDLL* node = (struct NodeDLL*)malloc(sizeof(struct NodeDLL));
    node->data = data;
    node->next = NULL;
    struct NodeDLL* itr = (*head);
    while (itr->next) {
        itr = itr->next;
    }
    itr->next = node;
    node->prev = itr;
}

void insert_dll(struct NodeDLL** head, int data, int index) {
    if ((index < 0) || (index > get_length_dll(*head))) {
        printf("Invalid Index!!\n");
        return;
    }
    if (index == 0) {
        push_dll(head, data);
        return;
    }
    struct NodeDLL* node = (struct NodeDLL*)malloc(sizeof(struct NodeDLL));
    node->data = data;
    int count = 0;
    struct NodeDLL* itr = (*head);
    while (itr) {
        if (count == index - 1) {
            node->next = itr->next;
            node->prev = itr;
            itr->next = node;
            itr->next->next->prev = node;
            break;
        }
        itr = itr->next;
        count++;
    }
}

void remove_dll(struct NodeDLL** head, int index) {
    if ((index < 0) || (index > get_length_dll(*head))) {
        printf("Invalid Index!!\n");
        return;
    }
    struct NodeDLL* itr = (*head);
    if (index == 0) {
        (*head) = (*head)->next;
        (*head)->prev = NULL;
        free(itr);
        return;
    }
    int count = 0;
    while (itr) {
        if (count == index - 1) {
            struct NodeDLL* node = itr->next;
            itr->next = itr->next->next;
            itr->next->prev = itr;
            free(node);
            break;
        }
        itr = itr->next;
        count++;
    }
}

int get_length_dll(struct NodeDLL* head) {
    int count = 0;
    struct NodeDLL* itr = head;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void display_dll(struct NodeDLL* head) {
    if (head == NULL) {
        printf("Doubly Linked List is empty!!\n");
        return;
    }
    struct NodeDLL* itr = head;
    while (itr) {
        printf("%d", itr->data);
        if (itr->next)
            printf("-->");
        itr = itr->next;
    }
    printf("\n");
}

void display_rev_dll(struct NodeDLL* head) {
    struct NodeDLL* itr = head;
    while (itr->next) {
        itr = itr->next;
    }
    while (itr) {
        printf("%d", itr->data);
        if (itr->prev)
            printf("<--");
        itr = itr->prev;
    }
    printf("\n");
}