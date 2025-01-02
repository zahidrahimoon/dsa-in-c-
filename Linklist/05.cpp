#include <iostream>
using namespace std;

struct Node{
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};

void display(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->val << " ";
    temp = temp->next;
  }
  cout<<endl;
}

void addNodeAtStart(Node* &head , int val){
  Node* newNode = new Node(val);
  newNode->next = head;
  head = newNode;
}

void addNodeAtEnd(Node* &head , int val){
  
  Node* newNode = new Node(val);
  Node* temp = head;
  
  while(temp->next != NULL){
    temp=temp->next;
  }

  temp->next = newNode;
}

void search(Node* head, int val) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->val == val) {
            cout << "The value " << val << " is found in the list." << endl;
            return; 
        }
        temp = temp->next; 
    }

    cout << "The value " << val << " is not found in the list." << endl;
}


int main() 
{
    Node* head = NULL;
    addNodeAtStart(head , 1);
    addNodeAtStart(head , 2);
    addNodeAtEnd(head , 3);
    search(head , 4);
    display(head);
    return 0;
}
