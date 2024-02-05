#include<iostream>
using namespace std;
int main(){
    int n=10;
    int sum=0;
    cout<<"Enter the number";
    for(int i=1; i<=10; i++){
        cout<<i<<" "<<endl;
        sum+=i;
    }
    cout<<"Sum of the total integers="<<sum<<endl;
    return 0;
}