/*
 * File         : main.cpp
 * Description  : "Source file for Data Structure main file using C++ language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "Array/include/array.hpp"

int main() {
    cout << "This is Array ADT demo!!" << endl;
    int arrsize;
    cout << "Please enter your array size: ";
    cin >> arrsize;
    Array myarray(arrsize);
    myarray.fill_arr();
    cout << "The size of Array -> " << myarray.get_size_arr() << endl;
    cout << "The length of Array -> " << myarray.get_length_arr() << endl;
    myarray.display_arr();
    myarray.append_arr(45);
    cout << "The size of Array -> " << myarray.get_size_arr() << endl;
    cout << "The length of Array -> " << myarray.get_length_arr() << endl;
    myarray.display_arr();
    myarray.insert_arr(3,48);
    cout << "The size of Array -> " << myarray.get_size_arr() << endl;
    cout << "The length of Array -> " << myarray.get_length_arr() << endl;
    myarray.display_arr();
    myarray.remove_arr(6);
    cout << "The size of Array -> " << myarray.get_size_arr() << endl;
    cout << "The length of Array -> " << myarray.get_length_arr() << endl;
    myarray.display_arr();

    return 0;
}