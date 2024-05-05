/*
 * File         : main.c
 * Description  : "Source file for Data Structure main file using C language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "LinkedList/include/linked_list.h"
#include "Queue/include/queue.h"
#include "Stack/include/stack.h"

int main() {
    printf("This is Single Linked List Demo!!\n");
    struct NodeSLL* headsll = NULL;
    append_sll(&headsll, 4);
    display_sll(headsll);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(headsll));
    push_sll(&headsll, 10);
    push_sll(&headsll, 20);
    display_sll(headsll);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(headsll));
    append_sll(&headsll, 43);
    append_sll(&headsll, 28);
    display_sll(headsll);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(headsll));
    insert_sll(&headsll, 6, 3);
    display_sll(headsll);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(headsll));
    insert_sll(&headsll, 16, 5);
    display_sll(headsll);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(headsll));
    remove_sll(&headsll, 4);
    display_sll(headsll);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(headsll));
    printf("-----------------------------------------------------------\n");
    printf("This is Doubly Linked List Demo!!\n");
    struct NodeDLL* headdll = NULL;
    append_dll(&headdll, 4);
    display_dll(headdll);
    printf("The Length of the Doubly Linked List: %d\n", get_length_dll(headdll));
    push_dll(&headdll, 10);
    push_dll(&headdll, 20);
    display_dll(headdll);
    printf("The Length of the Doubly Linked List: %d\n", get_length_dll(headdll));
    append_dll(&headdll, 43);
    append_dll(&headdll, 28);
    display_dll(headdll);
    printf("The Length of the Doubly Linked List: %d\n", get_length_dll(headdll));
    insert_dll(&headdll, 6, 3);
    display_dll(headdll);
    printf("The Length of the Doubly Linked List: %d\n", get_length_dll(headdll));
    insert_dll(&headdll, 16, 5);
    display_dll(headdll);
    printf("The Length of the Doubly Linked List: %d\n", get_length_dll(headdll));
    remove_dll(&headdll, 4);
    display_dll(headdll);
    printf("The Length of the Doubly Linked List: %d\n", get_length_dll(headdll));
    display_rev_dll(headdll);

    printf("-----------------------------------------------------------\n");
    printf("This is Queue based on Linked List demo!\n");
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->head = q->tail = NULL;
    enqueue(10, q);
    enqueue(30, q);
    enqueue(3, q);
    display_queue(q);
    printf("The length of the Queue: %d\n", get_length_queue(q));
    printf("The head of the Queue: %d\n", peek_queue(q));
    dequeue(q);
    display_queue(q);
    printf("The length of the Queue: %d\n", get_length_queue(q));
    printf("The head of the Queue: %d\n", peek_queue(q));

    printf("-----------------------------------------------------------\n");
    printf("This is Stack based on Linked List demo!\n");
    struct Stack* s = (struct Stack*)malloc(sizeof(struct Stack));
    s->top = NULL;
    push_stack(s, 14);
    push_stack(s, 4);
    display_stack(s);
    printf("The top element of the Stack: %d\n", peek_stack(s));
    printf("The length of the Stack: %d\n", get_length_stack(s));
    push_stack(s, 25);
    push_stack(s, 40);
    display_stack(s);
    printf("The top element of the Stack: %d\n", peek_stack(s));
    printf("The length of the Stack: %d\n", get_length_stack(s));
    pop_stack(s);
    display_stack(s);
    printf("The top element of the Stack: %d\n", peek_stack(s));
    printf("The length of the Stack: %d\n", get_length_stack(s));
    pop_stack(s);
    display_stack(s);
    printf("The top element of the Stack: %d\n", peek_stack(s));
    printf("The length of the Stack: %d\n", get_length_stack(s));
    pop_stack(s);
    display_stack(s);
    printf("The top element of the Stack: %d\n", peek_stack(s));
    printf("The length of the Stack: %d\n", get_length_stack(s));
    
    return 0;

}