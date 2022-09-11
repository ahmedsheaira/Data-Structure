//
//  main.c
//  Binary Search Tree
//
//  Created by Ahmed Sheaira on 11/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

struct Node* NewNode(int data) {
    // Allocate the new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    // Assign the new data to the new node
    node->key = data;
    // Initialize the left child as NULL
    node->left = NULL;
    // Initialize the right child as NULL
    node->right = NULL;
    // return the new node
    return node;
}

struct Node* insert(struct Node* node, int data) {
    // Check if the tree is empty or not
    if (node == NULL) {
        // Create the new node as the root node
        return (NewNode(data));
    }
    // Check of the new data is less than the parent
    if (data < node->key) {
        // Assign the new node to the left child
        node->left = insert(node->left, data);
    }
    // Check if the new nodde is greater than or equal the parent
    else if (data >= node->key) {
        node->right = insert(node->right, data);
    }
    // return the new node
    return node;
}


int main() {
    return 0;
}
