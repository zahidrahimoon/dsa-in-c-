#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) { 
        data = val;
        next = nullptr;
    }
};

int countNodes(Node* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}
int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Number of nodes: " << countNodes(head) << endl;

    return 0;
}
