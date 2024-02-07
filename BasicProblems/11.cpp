//gcf
#include<iostream>
using namespace std;
int main(){
    int num1, num2, gcf;
    cin>>num1>>num2;
    for(int i=1; i<=num1 && i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcf=i;
        }
    }
    cout<<"The greatest common factor is="<<gcf<<endl;
    return 0;
}
