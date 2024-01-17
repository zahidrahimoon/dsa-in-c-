#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int array1[]={6,7,8,9,10};
    int array2[10];

    for(int i=0; i<5; i++){
            array2[i]=array1[i]+array[i];
        }
        for(int i=0; i<5; i++){
        cout<<array2[i]<<" ";
   }
   return 0;
}