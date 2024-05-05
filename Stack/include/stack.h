/*
 * File         : stack.h
 * Description  : "Header file for Stack Data Structure based on Single Linked List using C language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include <stdio.h>
#include <stdlib.h>

struct NodeStack {
    int data;
    struct NodeStack* next;
};

struct Stack {
    struct NodeStack* top;
};

void push_stack(struct Stack* top, int data);
void pop_stack(struct Stack* top);
int peek_stack(struct Stack* top);
int get_length_stack(struct Stack* top);
void display_stack(struct Stack* top);
