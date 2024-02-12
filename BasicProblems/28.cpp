#include<iostream>
using namespace std;
int main(){
    int n=5;
    
for(int i=1; i<=5; i++){
    int value =i%2;
    for(int j=1; j<=i; j++){
        cout<<value<<" ";
        value=1-value;
    }
    cout<<endl;
}
return 0;
}