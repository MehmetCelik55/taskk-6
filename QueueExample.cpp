#include <iostream>
#include "Queue.h"  

int main() {
    Queue q;

    std::cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "Queue size: " << q.size() << std::endl;

    std::cout << "Front element of the queue: " << q.peek() << std::endl;

    std::cout << "After dequeue operation: " << q.dequeue() << std::endl;

    std::cout << "Queue size: " << q.size() << std::endl;

    std::cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
