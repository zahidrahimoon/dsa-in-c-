#include<iostream>
using namespace std;
int sum(int num)
{
    if (num!=0){
        return num+sum(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<"sum is :"<<sum(num);
    return 0;
}