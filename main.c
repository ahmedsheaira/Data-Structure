/*
 * File         : main.c
 * Description  : "Source file for Data Structure main file using C language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "LinkedList/include/linked_list.h"

int main() {
    printf("This is Single Linked List Demo!!\n");
    struct NodeSLL* head = NULL;
    append_sll(&head, 4);
    display_sll(head);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(head));
    push_sll(&head, 10);
    push_sll(&head, 20);
    display_sll(head);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(head));
    append_sll(&head, 43);
    append_sll(&head, 28);
    display_sll(head);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(head));
    insert_sll(&head, 6, 3);
    display_sll(head);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(head));
    insert_sll(&head, 16, 5);
    display_sll(head);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(head));
    remove_sll(&head, 4);
    display_sll(head);
    printf("The Length of the Single Linked List: %d\n", get_length_sll(head));
}