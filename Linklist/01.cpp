#include<iostream>
using namespace std;
struct Node
{
    int val;
    Node* next;

    Node(int val){
        this->val= val;
        this->next= NULL;
    }
};


int main(){
    Node* node = new Node(1);
    
    cout<<node->val<<endl;
}
