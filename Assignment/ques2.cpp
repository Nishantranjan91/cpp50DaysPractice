#include <iostream>
using namespace std;

// Definition for a Node
class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};