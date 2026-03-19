#include "LinkedQueue.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Test 1: Integer Queue
    cout << "Testing queue w/ ints:" << endl;
    
    LinkedQueue<int> q;
    
    // Test empty queue
    cout << "Empty? " << q.isEmpty() << " (1 expected)" << endl;
    cout << "Length: " << q.getLength() << " (0 expected)" << endl;
    
    // Test enqueue
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    
    cout << "Front: " << q.front() << " (5 expected)" << endl;
    cout << "Back: " << q.back() << " (15 expected)" << endl;
    cout << "Length: " << q.getLength() << " (3 expected)" << endl;
    
    // Test dequeue
    q.dequeue();
    cout << "After dequeue - Front: " << q.front() << " (10 expected)" << endl;
    
    // Test clear
    q.clear();
    cout << "After clear - Empty? " << q.isEmpty() << " (1 expected)" << endl;
    
    // Test exceptions
    try {
        q.front();
    } catch (const string& e) {
        cout << "front() error: " << e << endl;
    }
    
    try {
        q.dequeue();
    } catch (const string& e) {
        cout << "dequeue() error: " << e << endl;
    }
    
    // Test 2: String Queue
    cout << "\nTesting queue w/ strings:" << endl;
    
    LinkedQueue<string> stringQ;
    
    stringQ.enqueue("Testing");
    stringQ.enqueue("for");
    stringQ.enqueue("CS 20");
    
    cout << "Front: " << stringQ.front() << " (Testing expected)" << endl;
    cout << "Back: " << stringQ.back() << " (CS 20 expected)" << endl;
    
    stringQ.dequeue();
    cout << "After dequeue - Front: " << stringQ.front() << " (banana expected)" << endl;
    
    // Test 3: Copy Constructor
    cout << "\nTesting copy constructor:" << endl;
    
    LinkedQueue<int> original;
    original.enqueue(1);
    original.enqueue(2);
    original.enqueue(3);
    
    LinkedQueue<int> copy(original);
    
    cout << "Original front: " << original.front() << " (1 expected)" << endl;
    cout << "Copy front: " << copy.front() << " (1 expected)" << endl;
    
    // Modify original to verify deep copy
    original.dequeue();
    cout << "After modifying original:" << endl;
    cout << "Original front: " << original.front() << " (2 expected)" << endl;
    cout << "Copy front: " << copy.front() << " (still 1 expected)" << endl;
    
    // Test 4: Edge Cases
    cout << "\nTesting edge cases:" << endl;
    
    // Single element
    LinkedQueue<int> testQ;
    testQ.enqueue(42);
    cout << "Single element - Front: " << testQ.front() << " Back: " << testQ.back() << " (42 42 expected)" << endl;
    
    testQ.dequeue();
    cout << "After dequeue - Empty? " << testQ.isEmpty() << " (1 expected)" << endl;
    
    // Multiple operations
    for(int i = 1; i <= 3; i++) {
        testQ.enqueue(i * 10);
    }
    
    testQ.dequeue();
    testQ.enqueue(40);
    cout << "After dequeue+enqueue - Front: " << testQ.front() << " (20 expected) Back: " << testQ.back() << " (40 expected)" << endl;
    
    // Dequeue all
    while(!testQ.isEmpty()) {
        cout << "Removing: " << testQ.front() << endl;
        testQ.dequeue();
    }
    cout << "All removed - Empty? " << testQ.isEmpty() << " (1 expected)" << endl;
    
    cout << "\nAll tests passed!" << endl;
    return 0;
}