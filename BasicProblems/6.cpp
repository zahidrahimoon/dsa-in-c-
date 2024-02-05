#include<iostream>
using namespace std;
 int main(){
    cout<<"The Perfect numbers are"<<endl;

 for(int num=1; num<=500; num++){
    int sum=1;
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            sum+=i;
        if(i!=num/i){
            sum+=num/i;
        }
    }
 }
 if(num==sum){
    cout<<num<<endl;
 }
 }
 cout<<endl;
 return 0;
 }