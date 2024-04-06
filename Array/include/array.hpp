/*
 * File         : array.hpp
 * Description  : "Header file for Array Abstract Data Structure using C++ language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

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

#endif
