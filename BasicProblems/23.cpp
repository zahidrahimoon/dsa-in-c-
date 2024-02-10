#include<iostream>
using namespace std;
int main(){
    int num ,revNum=0;
    cout<<"Enter the number";
    cin>>num;

    int OrgNum=num;

    for(; num!=0; num/=10){
        int remender= num % 10;
        revNum = revNum * 10 + remender;
    }
    cout<<"Original Number is "<<OrgNum<<endl;
    cout<<"Reversed Number is "<<revNum<<endl;

    return 0;
}