#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h" 

class Queue {
private:
    Node* head; 
    Node* tail;  
    int queueSize; 

public:
    Queue() : head(nullptr), tail(nullptr), queueSize(0) {}

    bool isEmpty() { return head == nullptr; } 
    void enqueue(int value); 
    int dequeue(); 
    int peek(); 
    int size() { return queueSize; } 

    ~Queue(); 
};

#endif
#pragma once
