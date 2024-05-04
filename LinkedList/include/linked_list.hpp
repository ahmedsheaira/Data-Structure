/*
 * File         : linked_list.hpp
 * Description  : "Header file for Linked List Data Structure using C++ language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#ifndef LINKED_LIST_HPP_
#define LINKED_LIST_HPP_

#pragma once
#include <iostream>
#include <string>

using namespace std;

class NodeSLL {
public:
    int data;
    NodeSLL* next;
};

class SingleLinkedList {
private:
    NodeSLL* headsll;

public:
    SingleLinkedList();
    void push_sll(int data);
    void append_sll(int data);
    void insert_sll(int data, int index);
    void remove_sll(int index);
    int get_length_sll();
    void display_sll();
};

class NodeDLL {
public:
    int data;
    NodeDLL* next;
    NodeDLL* prev;
};

class DoublyLinkedList {
private:
    NodeDLL* headdll;

public:
    DoublyLinkedList();
    void push_dll(int data);
    void append_dll(int data);
    void insert_dll(int data, int index);
    void remove_dll(int index);
    int get_length_dll();
    void display_dll();
    void display_rev_dll();
};

#endif