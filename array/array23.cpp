// Rotate an array to the left by 'k' positions. just give hint not code
#include<iostream>
using namespace std;
//reversed function
int ReverseNum(int array[],int length){
    int start = 0;
    int end =length -1;

    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
    
    start++;
    end--;

}
}
//reversefunction  for k first element
int ReverseNumk(int array[],int k){
    int start = 0;
    int end =k -1;

    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
    
    start++;
    end--;

}

}
int main(){
    int num=5;
    int array[num]={1,2,3,4,5};
    int k=1;   //k value k lia hn
    cout<<"Original Array ";
    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }
    ReverseNum(array, num); //call back first function

    cout<<"Reversed Array";
    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }
                              //call back second function
    ReverseNumk(array,k);
    cout<<"reversed Array for k ";
    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}