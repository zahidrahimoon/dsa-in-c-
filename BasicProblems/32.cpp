#include<iostream>
using namespace std;
void maxi(int n1, int n2){
    if(n1>n2){
    cout<<"The Larger number is "<<n1;
    }
    else{
        cout<<"The larger number is "<<n2;
    }
}
int main(){
    int n1;
    int n2;
    cout<<"Enter the first Number";
    cin>>n1;
     cout<<"Enter the second Number";
    cin>>n2;
    maxi(n1,n2);

}