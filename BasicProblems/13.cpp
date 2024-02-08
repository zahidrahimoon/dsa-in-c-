#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the four number digit"<<endl;
    cin>>number;

    if(number>=1000 && number<=9999){
        int  digit_1=number/10;
        int digit_2=(number/10)%10;
        int digit_3=(number/100)%10;
        int  digit_4=number%1000;

        int average=(digit_1+digit_2+digit_3+digit_4)/4;
        cout<<"The Average of all digits is "<<average<<endl;
    }
    return 0;
}