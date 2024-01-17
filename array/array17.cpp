//removing the duplicate value
#include<iostream>
using namespace std;

int ExtraValue(int array[],int size){
    int uniqueone=0;

    for(int i=0; i<size; i++){
        bool isDuplicate=false;

        for(int j=0; j<uniqueone; j++){
            if(array[i]==array[j]){
                isDuplicate=true;
                break;
            }
        }
        if(!isDuplicate){
            array[uniqueone++]=array[i];
        }
    }
    return uniqueone;
}
int main(){
    int num;
    cout<<"Enter the index of array"<<endl;
    cin>>num;

    int array[num];

    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    for(int i=0; i<num; i++){
        cout<<array[i]<<" ";
    }
    int uniqueIndex=ExtraValue(array,num);
       cout<<"Array after removing Duplicate";
    for(int i=0; i<uniqueIndex; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}