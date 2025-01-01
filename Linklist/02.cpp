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

void display(Node* head) {
    if (head == NULL) {
        cout << "The Linked List is empty." << endl;
        return;
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
    Node* node = new Node(1);
    node->next = new Node(2);
    display(NULL);
    display(node);
    return 0;
}
