#include <iostream>

using namespace std;

// Definition for singly-linked list node
class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode* next;
    
    // Constructor
    SinglyLinkedListNode(int node_data) : data(node_data), next(nullptr) {}
};

// Function to insert a node at the head of the linked list
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->next = head;
    return newNode;
}

// Function to print the linked list
void printLinkedList(SinglyLinkedListNode* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, data;
    cout << "Enter the number of elements to be inserted at the head: ";
    cin >> n;
    
    SinglyLinkedListNode* head = nullptr;
    for (int i = 0; i < n; i++) {
        cout << "Enter the element to be inserted: ";
        cin >> data;
        head = insertNodeAtHead(head, data);
    }
    
    cout << "Linked List after insertion: ";
    printLinkedList(head);
    
    // Free memory allocated for the linked list
    while (head != nullptr) {
        SinglyLinkedListNode* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}
 
