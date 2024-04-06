#pragma once
#include <iostream>

using namespace std;

class Array {
private:
    int size;
    int length;
    int* items;
public:
    Array(int arrsize);
    void fill_arr();
    void append_arr(int val);
    void insert_arr(int index, int val);
    void remove_arr(int index);
    int get_size_arr();
    int get_length_arr();
    void display_arr();
};
