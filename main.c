/*
 * File         : main.c
 * Description  : "Source file for Data Structure main file using C language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "LinkedList/include/linked_list.h"
#include "Queue/include/queue.h"

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

    return 0;

}