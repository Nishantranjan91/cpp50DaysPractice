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

// Definition for a LinkedList
class LinkedList {
public:
    Node* head;
    
    LinkedList() {
        head = nullptr;
    }
    
    // Method to insert a node at the beginning
    void insert_at_beginning(int data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }
    
    // Method to print the linked list
    void print_list() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "None" << endl;
    }
};

int main() {
    // Create an empty linked list
    LinkedList linked_list;
    
    // Insert a node with data 5 at the beginning
    linked_list.insert_at_beginning(5);
    
    // Print the linked list to verify
    linked_list.print_list();
    
    return 0;
}
