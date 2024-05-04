/*
 * File         : linked_list.h
 * Description  : "Header file for Linked List Data Structure using C language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NodeSLL {
    int data;
    struct NodeSLL* next;
};

void push_sll(struct NodeSLL** head, int data);
void append_sll(struct NodeSLL** head, int data);
void insert_sll(struct NodeSLL** head, int data, int index);
void remove_sll(struct NodeSLL** head, int index);
int get_length_sll(struct NodeSLL* head);
void display_sll(struct NodeSLL* head);

struct NodeDLL {
    int data;
    struct NodeDLL* next;
    struct NodeDLL* prev;
};

void push_dll(struct NodeDLL** head, int data);
void append_dll(struct NodeDLL** head, int data);
void insert_dll(struct NodeDLL** head, int data, int index);
void remove_dll(struct NodeDLL** head, int index);
int get_length_dll(struct NodeDLL* head);
void display_dll(struct NodeDLL* head);
void display_rev_dll(struct NodeDLL* head);

#endif
