#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtStart(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int display(Node* head) {
    if (head == NULL) {
        cout << "The Linked List is empty." << endl;
    }

    cout << "The Linked List is: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;        
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    insertAtStart(head, 3); 
    insertAtStart(head, 4); 
    display(head);

    return 0;
}
