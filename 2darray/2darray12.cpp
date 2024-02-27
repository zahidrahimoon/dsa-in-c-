#include<iostream>
using namespace std;
int main(){
    const int size = 4;
    int A[4] = {24,76,90,100};
    int B[4] = {12,80,78,20};
    float crr[size];

    for(int i=0; i<size; i++){
        if(A[i] > B[i]){
          crr[i] = A[i]  + B[i] / 100.0;  
        }
        else{
           crr[i] = B[i] + A[i] / 100.0;
        }
    }
    cout<<" Array C"<<endl;;

    for(int i=0; i<size; i++){
        cout<<crr[i]<<endl; 
    }
    return 0;
}
