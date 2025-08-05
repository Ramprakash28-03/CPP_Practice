#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(Node** head_ref, int new_data) {
    Node* new_node = new Node(); // Allocate new node
    new_node->data = new_data;   // Put in the data
    new_node->next = (*head_ref); // Make next of new node as head
    (*head_ref) = new_node;      // Move the head to point to the new node
}

// Function to insert a new node after a given node
void insertAfter(Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();  // Allocate new node
    new_node->data = new_data;    // Put in the data
    new_node->next = prev_node->next; // Make next of new node as next of previous node
    prev_node->next = new_node;   // Move the next of previous node as new node
}

// Function to insert a new node at the end of the list
void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = new Node(); // Allocate new node
    Node* last = *head_ref;  // Create a temp pointer to traverse to the end of the list

    new_node->data = new_data; // Put in the data
    new_node->next = NULL; // This new node is going to be the last node, so make next of it as NULL

    if (*head_ref == NULL) { // If the Linked List is empty, then make the new node as head
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) { // Traverse till the last node
        last = last->next;
    }

    last->next = new_node; // Change the next of last node
}

// Function to print the linked list
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " " << node << " " << sizeof(node)<< endl;
        node = node->next;
    }
    cout << endl;
}

// Main function to test the above functions
int main() {
    Node* head = NULL;

    insertAtEnd(&head, 6);
    insertAtBeginning(&head, 'qam');
    insertAtBeginning(&head, 1);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 8);

    cout << "Created Linked list is: ";
    printList(head);

    return 0;
}

