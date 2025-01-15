#include <iostream>
#include <stack>
using namespace std;


string reverseStack(string c){
    stack<char> s;
    
    string reverse = "";
    
    if(c==""){
        return reverse;
    }
    
    for(char ch : c){
     s.push(ch);
    }
   
   
   while(!s.empty()){
     reverse+=s.top();
     s.pop();
   }
     
    return reverse;
}

 


int main() 
{
    string result = reverseStack("hello");
    cout << "The reverse is " <<result<<endl;
    return 0;
}
