#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int i=1; i<=n; i++){
        cout<<fact<<endl;
        fact*=i;
    }
    cout<<endl;
  return 0;
}
