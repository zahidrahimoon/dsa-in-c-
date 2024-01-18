#include<iostream>
using namespace std;
int RightShiftBYOne(int array[],int num){   
int temp=array[num-1];

    for(int i=num-1; i>0; i--){
      array[i]=array[i-1];
    }
    array[0]=temp;
    }
int main(){
    int size=5;
    int array[size]={1,2,3,4,5};

    cout<<"Original Array";
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
 
    RightShiftBYOne(array,size);

    cout<<"Modified Array";
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}