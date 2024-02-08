#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
     int seriessum=0;
     for(int i=1; i<=num; i++){
        int currentsum=0;
        for(int j=1; j<=i; j++){
            currentsum+=j;
        }
        seriessum+=currentsum;
     }
     cout<<"The sum of the series is "<<seriessum;
     return 0;

}