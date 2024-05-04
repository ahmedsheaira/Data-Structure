/*
 * File         : main.cpp
 * Description  : "Source file for Data Structure main file using C++ language"
 * Auther       : Ahmed Sheaira
 * Version      : 1.0
 */

#include "Array/include/array.hpp"
#include "LinkedList/include/linked_list.hpp"

int main() {
    // cout << "This is Array ADT demo!!" << endl;
    // int arrsize;
    // cout << "Please enter your array size: ";
    // cin >> arrsize;
    // Array myarray(arrsize);
    // myarray.fill_arr();
    // cout << "The size of Array -> " << myarray.get_size_arr() << endl;
    // cout << "The length of Array -> " << myarray.get_length_arr() << endl;
    // myarray.display_arr();
    // myarray.append_arr(45);
    // cout << "The size of Array -> " << myarray.get_size_arr() << endl;
    // cout << "The length of Array -> " << myarray.get_length_arr() << endl;
    // myarray.display_arr();
    // myarray.insert_arr(3,48);
    // cout << "The size of Array -> " << myarray.get_size_arr() << endl;
    // cout << "The length of Array -> " << myarray.get_length_arr() << endl;
    // myarray.display_arr();
    // myarray.remove_arr(6);
    // cout << "The size of Array -> " << myarray.get_size_arr() << endl;
    // cout << "The length of Array -> " << myarray.get_length_arr() << endl;
    // myarray.display_arr();

    // cout << "This is Single Linked List demo!!" << endl;
    // SingleLinkedList sll;
    // sll.append_sll(4);
    // sll.display_sll();
    // cout << "The Length of the Single Linkde List: " << sll.get_length_sll() << endl;
    // sll.push_sll(10);
    // sll.push_sll(20);
    // sll.display_sll();
    // cout << "The Length of the Single Linkde List: " << sll.get_length_sll() << endl;
    // sll.append_sll(43);
    // sll.append_sll(28);
    // sll.display_sll();
    // cout << "The Length of the Single Linkde List: " << sll.get_length_sll() << endl;
    // sll.insert_sll(6, 3);
    // sll.display_sll();
    // cout << "The Length of the Single Linkde List: " << sll.get_length_sll() << endl;
    // sll.remove_sll(3);
    // sll.display_sll();
    // cout << "The Length of the Single Linkde List: " << sll.get_length_sll() << endl;
    // sll.insert_sll(16, 5);
    // sll.display_sll();
    // cout << "The Length of the Single Linkde List: " << sll.get_length_sll() << endl;
    // sll.remove_sll(4);
    // sll.display_sll();
    // cout << "The Length of the Single Linkde List: " << sll.get_length_sll() << endl;
    // cout << "----------------------------------------" << endl;
    DoublyLinkedList dll;
    dll.append_dll(4);
    dll.display_dll();
    cout << "The Length of the Doubly Linkde List: " << dll.get_length_dll() << endl;
    dll.push_dll(10);
    dll.push_dll(20);
    dll.display_dll();
    cout << "The Length of the Doubly Linkde List: " << dll.get_length_dll() << endl;
    dll.append_dll(43);
    dll.append_dll(28);
    dll.display_dll();
    cout << "The Length of the Doubly Linkde List: " << dll.get_length_dll() << endl;
    dll.insert_dll(6, 3);
    dll.display_dll();
    cout << "The Length of the Doubly Linkde List: " << dll.get_length_dll() << endl;
    dll.insert_dll(16, 5);
    dll.display_dll();
    cout << "The Length of the Doubly Linkde List: " << dll.get_length_dll() << endl;
    dll.remove_dll(4);
    dll.display_dll();
    cout << "The Length of the Doubly Linkde List: " << dll.get_length_dll() << endl;
    dll.display_rev_dll();

    return 0;
}