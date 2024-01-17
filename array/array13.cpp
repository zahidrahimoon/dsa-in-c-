//check the both arrys are same or not
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int array1[]={1,2,3,4,5};

    bool isEqual=true;

    for(int i=0; i<5; i++){
        if(array[i]!=array1[i]){
        isEqual=false;
        break;
        }
    }
    if(isEqual){
        cout<<"There are same "<<endl;
    }
    else{
        cout<<"There are  not same "<<endl;
    }

    return 0;
}