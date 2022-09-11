//
//  main.c
//  Binary Tree
//
//  Created by Ahmed Sheaira on 11/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newnode(int data) {
    // Allocate the new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    // Assign the new date to the new node
    node->data = data;
    // Initialize the left child as NULL
    node->left = NULL;
    // Initialize the right child as NULL
    node->right = NULL;
    // Return the new node
    return (node);
}

int main() {
    struct Node* root = newnode(4);
    root->left = newnode(5);
    root->right = newnode(10);
    getchar();
    return 0;
}
