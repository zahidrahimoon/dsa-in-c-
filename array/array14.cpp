//palidrome 
#include<iostream>
using namespace std;
int main(){

    int array[5];
    bool isPandriome=true;

    for(int i=0; i<5; i++){
        cin>>array[i];
    }

    for(int i=0; i<5; i++){
        if(array[i]!=array[5-1-i]){
            isPandriome = false;
        }
    }
       if(isPandriome){
        cout<<"The number is palindrome."<<endl;
       }
       else{
        cout<<"The number is not palindrome."<<endl;
       }
       return 0;
         
}