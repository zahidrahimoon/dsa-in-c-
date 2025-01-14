#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    stack<int>s;
    s.push(2);
    s.push(3);
    cout<<"The size is " << s.size() << endl;
    s.pop();
    cout<<"The size is " << s.size() <<endl;
    
    return 0;
}
