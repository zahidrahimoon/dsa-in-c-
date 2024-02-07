#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the three numbers";
    cin>>num;

    if(num>=100 && num<=999)
    //extracting values
    {
        int digit_1=num%10;
        int digit_2=(num/10)%10;
        int digit_3=num/100;

        int reversenum=digit_1 * 100 + digit_2 * 10 +digit_3;
        cout<<"The reversenum is="<<reversenum<<endl;
    }
    else{
        cout<<"Put the valid number"<<endl;
    }
    return 0;
}