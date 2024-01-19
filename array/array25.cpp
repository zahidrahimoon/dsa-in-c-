#include<iostream>
using namespace std;

bool isDuplicate(int*array ,int size){

    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if (array[i] == array[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int num=5;
    int array[num]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);

    bool result=isDuplicate(array,size);
    cout<<boolalpha<<result<<endl;

    int array1[num]={1,2,3,1,4};    
    int size1=sizeof(array1)/sizeof(array1[0]);

    bool result1=isDuplicate(array1 ,size1);
    cout<<boolalpha<<result1<<endl;
    return 0;
}