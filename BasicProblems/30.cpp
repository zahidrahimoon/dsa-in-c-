#include<iostream>
using namespace std;
void Increment(int &s){
    s=s+5000;
    cout<<"Salary inside function"<<s<<endl;
}
int main(){
    int sal=27000;
    Increment(sal);
    cout<<"Salary inside main"<<sal<<endl;
    return 0;
}