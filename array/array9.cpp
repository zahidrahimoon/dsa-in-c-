#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    int count=0;

    for(int i=0; i<9; i++){
        if(array[i]%2==0){
        cout<<array[i]<<" ";
        count++;
    }
    }
    cout<<"The Even numbers in array are :"<<count<<endl;
    return 0;
}