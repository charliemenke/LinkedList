//
//  LinkedList.hpp
//  Lab10
//
//  Created by Charlie Menke on 2/14/19.
//  Copyright © 2019 Charlie Menke. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
//#include "Node.hpp"

template<typename T>
class LinkedList {
    public:
        LinkedList();
        ~LinkedList();
        void InsertAtHead(T v);
        void PrintList();
    private:
        struct Node { T item; Node* next; };
        Node head;
};

template<typename T>
LinkedList<T>::LinkedList() {
    head.item = nullptr;
}

template<typename T>
void LinkedList<T>::InsertAtHead(T v) {
    Node newNode = {v, head};
    head = newNode;
}

template<typename T>
void LinkedList<T>::PrintList() {
    Node current;
    for(current = head; current != nullptr; current = current.next) {
        std::cout << current.item << " \n";
    }
}

template<typename T>
LinkedList<T>::~LinkedList<T>() {
    Node toDelete;
    while(toDelete != nullptr) {
        Node temp = toDelete.next;
        delete toDelete;
        toDelete = temp;
    }
    head = nullptr;
}


#endif /* LinkedList_hpp */
