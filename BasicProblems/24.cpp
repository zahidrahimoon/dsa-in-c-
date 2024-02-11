#include<iostream>
using namespace std;
int main(){
    int num=4;
    int counter=1;

    for(int i=1; i<=num; i++){
        for(int j=num-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<counter<<" ";
            counter++;

        }
        cout<<endl;
    }
    return 0;
}