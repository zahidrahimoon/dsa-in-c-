#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a=0;
    int b=1;
    int c=a+b;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<c<<" ";
            c=a+b;
            a=b;
            b=c;
            c=a+b;
        }
        cout<<endl;
    }
    return 0;
}