#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void insertAtTop(Node* &head , int value){
  Node* temp = new Node(value);
  temp->next = head;
  head= temp;
};

void insertAtEnd(Node* &head , int value){
  Node* temp = new Node(value);
  if(head==nullptr){
    cout<<"The Link list is empty"<<endl;
    return;
  }
  Node* current = head;
  if(current->next !=nullptr){
    current= current->next;
  }
  current->next = temp;
};


void deleteAtPosition(Node* &head , int k){
  
  if(head==nullptr){
    cout<<"The Link list is empty"<<endl;
    return;
  }
  
   Node* current = head;
   for(int i=1; i<k-1 && current->next != nullptr; i++){
     current = current->next;
   }
   
   
   Node* temp = current->next;
   current->next = temp->next;
   delete temp;
}

void deleteAtStart(Node*& head) {
    if (head == nullptr) {
        cout << "The Linked List is empty" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node*& head) {
    if (head == nullptr) {
        cout << "The Linked List is empty" << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    Node* temp = current->next;
    current->next = nullptr;
    delete temp;
}


void insertAtPosition(Node* &head , int value , int k){
  Node* temp = new Node(value);
  if(head==nullptr){
    cout<<"The Link list is empty"<<endl;
    return;
  }
   Node* current = head;
   for(int i=1; i<k-1 && current->next != nullptr; i++){
     current = current->next;
   }
   
   temp->next = current->next;
   current->next = temp;
}



void display(Node* head) {
    if (head == nullptr) {
        cout << "The Linked List is empty" << endl;
        return;
    }
    
    Node* temp = head;
    cout<<"The Linked list is "<<" ";
    while (temp != nullptr) {
        cout<< temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main() {
    Node* head = nullptr;
    insertAtTop(head , 2);
    insertAtTop(head , 3);
    insertAtEnd(head , 4);
    insertAtEnd(head , 3);
    insertAtPosition(head , 6 , 2);
    deleteAtStart(head);
    deleteAtEnd(head);
    deleteAtPosition(head , 2);
    
    display(head);
    
    return 0;
}
