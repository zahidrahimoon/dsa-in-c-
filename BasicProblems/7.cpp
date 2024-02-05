#include<iostream>
using namespace std;
int main(){
    int num;
    bool isPrime=true;
    cin>>num;
      if(num<=1){
       isPrime=false;
      }
      else{
        for(int i=2; i*i<=num; i++){
            if(num%i==0){
         isPrime=false;
         break;
            }

        }
      }
      if(isPrime){
        cout<<num<<" is the number is prime"<<endl;
      }
      else{
        cout<<num<<" is the number is not a prime"<<endl;
      }
      return 0;
}