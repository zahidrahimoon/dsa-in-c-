#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=60;i++){
        if(i%3==0 && i%2!=0){
            cout<<i<<endl;
             sum+=i;
        }
    }
     cout<<"Sum"<<sum<<endl;
    return 0;
}