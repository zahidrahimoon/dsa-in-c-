#include <iostream>
#include <queue>
using namespace std;

int main() 
{
  
    queue<int> q;
    
    q.push(11);
    q.push(12);
    q.push(13);
    
    cout<<"The size of  queue is " << q.size()<<endl;
    
    q.pop();
    
    cout<<"The size of  queue is " << q.size()<<endl;
    
    if(q.empty()){
      cout<<"The queue is empty"<<endl;
    }
    else{
      cout<<"The queue is not empty"<<endl;
    }
    
    
    
    return 0;
}
