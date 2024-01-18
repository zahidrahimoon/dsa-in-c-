//intersection of two arrays
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int array1[]={2,4,6,8,10};
    bool intersection=false;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
        if(array[i]==array1[j]){
            intersection=true;
            break;
        }
    }
    if(intersection){
        break;
    }
    }

    if(intersection){
    cout<<"The intersection exist";
    }
    else{
        cout<<"Invalid ";
    }
     return 0;

}