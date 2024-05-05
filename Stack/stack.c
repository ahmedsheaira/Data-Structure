/*
 * File         : stack.c
 * Description  : "Source file for Stack Data Structure based on Single Linked List using C language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "include/stack.h"

void push_stack(struct Stack* stack, int data) {
    struct NodeStack* node = (struct NodeStack*)malloc(sizeof(struct NodeStack));
    node->data = data;
    if (stack->top == NULL) {
        node->next = NULL;
        stack->top = node;
        return;
    }
    node->next = stack->top;
    stack->top = node;
}

void pop_stack(struct Stack* stack) {
    struct NodeStack* itr = stack->top;
    stack->top = stack->top->next;
    free(itr);
}

int peek_stack(struct Stack* stack) {
    return stack->top->data;
}

int get_length_stack(struct Stack* stack) {
    int count = 0;
    struct NodeStack* itr = stack->top;
    while (itr) {
        count++;
        itr = itr->next;
    }
    return count;
}

void display_stack(struct Stack* stack) {
    if (stack->top == NULL) {
        printf("The Stack os empty!\n");
        return;
    }
    struct NodeStack* itr = stack->top;
    while (itr) {
        printf("%d", itr->data);
        if (itr->next)
            printf("-->");
        itr = itr->next;
    }
    printf("\n");
}
