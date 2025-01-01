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

int display(Node* head) {
    int count = 0; 
    if (head == NULL) {
        cout << "The Linked List is empty." << endl;
        return count; 
    }

    cout << "The Linked List is: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;        
        count++;                  
    }
    cout << endl;
    return count; 
  
}

int main() {
    Node* node = new Node(1);
    node->next = new Node(2);

    int count = display(NULL);
    cout << "Node count: " << count << endl;

    count = display(node);
    cout << "Node count: " << count << endl;

    return 0;
}
