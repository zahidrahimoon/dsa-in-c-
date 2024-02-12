#include<iostream>
using namespace std;
int main(){
    int n=7;

    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if(i%2!=0){
            cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}