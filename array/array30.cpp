#include<iostream>
using namespace std;
int main(){
    float temp[5];
    float sum = 0.0;
    float average = 0.0;

    for(int i=0; i<5; i++){
        cout<<"Enter the temperture"<<i+1<<endl;
        cin>>temp[i];
        cout<<endl;
    }
    for(int i=0; i<5; i++){
        sum += temp[i];
    }
        average = sum / 5;
        cout<<"Sum : "<<sum<<endl;
        cout<<"Average : "<<average<<endl;
        return 0;
}