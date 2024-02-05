#include<iostream>
using namespace std;
int main(){
    //take input from user
int base,element;
cout<<"Enter base";
cin>>base;

cout<<"Enter element";
cin>>element;
//using loop for each element
for(int i=0;i<element; i++){
    cout<<base<<" * "<<i<<" = "<<base*i<<endl;
}
    return 0; // run the code



}