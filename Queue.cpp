
#include "Queue.h"
#include <stdexcept> 


void Queue::enqueue(int value) {
    Node* newNode = new Node(value); 
    if (tail == nullptr) { 
        head = tail = newNode; 
    }
    else {
        tail->next = newNode; 
        tail = newNode; 
    }
    queueSize++; 
}

int Queue::dequeue() {
    if (isEmpty()) {
        throw std::out_of_range("Queue is empty!"); 
    }
    int frontValue = head->data;
    Node* temp = head; 
    head = head->next; 
    delete temp; 
    if (head == nullptr) {
        tail = nullptr; 
    }
    queueSize--;
    return frontValue; 
}


int Queue::peek() {
    if (isEmpty()) {
        throw std::out_of_range("Queue is empty!"); 
    }
    return head->data; 
}


Queue::~Queue() {
    while (!isEmpty()) {
        dequeue(); 
    }
}
