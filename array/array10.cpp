//turn negaative value into zaro
#include<iostream>
using namespace std;
int main(){
    int array[]={-1,2,-5,4,8,9,-4};

    for(int i=0; i<7; i++){
        if(array[i]<0){
        array[i]=0;
    }
        cout<<array[i]<<" ";
    }
    return 0;
}