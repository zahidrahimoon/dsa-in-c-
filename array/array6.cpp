//  reversearrray
#include<iostream>
using namespace std;
int ReverseArray(int array[],int length){
    int start=0;
    int end=length-1;

    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;

        start++;
        end--;
    }
}
int main(){
    int num;
    cout<<"Enter the index Number";
    cin>>num;

    int array[num];

    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    cout<<"Original Value :";
    for(int i=0; i<num; i++){
        cout<<"\nValue at index "<<i<<": "<<array[i]<<endl;
    }
    ReverseArray(array,num);
    cout<<"Reversed array :";
    for(int i=0; i<num; i++){
        cout<<array[i]<<endl;

}
return 0;

}