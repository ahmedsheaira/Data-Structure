/*
 * File         : array.cpp
 * Description  : "Source file for Array Abtract Data Structure using C++ language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "include/array.hpp"

Array::Array(int arrsize) {
    size = arrsize;
    length = 0;
    items = new int[arrsize];
}

void Array::fill_arr() {
    int no_elements;
    cout << "How many items you wanna fill?";
    cin >> no_elements;
    if (no_elements > size) {
        cout << "Invalid number. You can not exceed the array size!!" << endl;
        return;
    }
    else {
        for (int i=0 ; i<no_elements ; i++) {
            cout << "Enter the element number " << i << ": ";
            cin >> items[i];
            length++;
        }
    }
}

void Array::append_arr(int val) {
    if (length == size) {
        cout << "You reach the max size of array!!" << endl;
        return;
    }
    else {
        items[length] = val;
        length++;
    }
}

void Array::insert_arr(int index, int val) {
    if (index < 0 && index > size) {
        cout << "Invalid Index!!" << endl;
        return;
    }
    else {
        for (int i=length ; i>index ; i--) {
        items[i] = items[i - 1];
        }
        items[index] = val;
        length++;
    }
}

void Array::remove_arr(int index) {
    if (index >= length) {
        cout << "Invalid index!!" << endl;
        return;
    }
    else {
        for (int i=index ; i<length-1 ; i++) {
            items[i] = items[i + 1];
        }
        length--;
    }
}

int Array::get_size_arr() {
    return size;
}

int Array::get_length_arr() {
    return length;
}

void Array::display_arr() {
    cout << "The array elements -> ";
    for (int i=0 ; i<length ; i++) {
        cout << items[i] << "\t";
    }
    cout << endl;
}
