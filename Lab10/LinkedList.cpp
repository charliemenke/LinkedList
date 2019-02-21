//
//  LinkedList.cpp
//  Lab10
//
//  Created by Charlie Menke on 2/14/19.
//  Copyright © 2019 Charlie Menke. All rights reserved.
//

#include "LinkedList.hpp"
#include <stdio.h>
#include <iostream>


LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::InsertAtHead(int v) {
    
    Node* newNode = new Node(v, head);
    head = newNode;
    
}

void LinkedList::PrintList() {
    Node* current;
    for(current = head; current != nullptr; current = current->GetNext()) {
        current->PrintNode();
    }
}

void LinkedList::freeList() {
    Node* toDelete;
    for(toDelete = head; toDelete != nullptr;) {
        Node* temp = toDelete->GetNext();
        delete toDelete;
        toDelete = temp;
    }
    head = nullptr;
}
