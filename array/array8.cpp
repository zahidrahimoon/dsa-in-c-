#include<iostream>
using namespace std;
//taking the function isSorted 
bool isSorted(int array[],int size){
    //taking for loop for iteration the values
        for(int i=0; i<size-1; i++){
            //check by condition if it flase it means it is not ascending value
            if(array[i]>array[i+1]){
                return false;
            }
        }
        //return true means it is ascending value
        return true;
}
int main(){
    //array int
    int array[]={1,2,3,4,5,6,7,8,9,10};
    //Size of the array
    int size=sizeof(array)/sizeof(array[0]);
//condition check that fuction inside code is correct or not 
    if(isSorted(array,size)){
        cout<<"The array is sorted."<<endl;
    }
    else{
        cout<<"The array is not sorted."<<endl;
    }
return 0;

}