#include<iostream>
using namespace std;
int linearSearch(int array[],int n,int key){
    for(int i=0; i<n; i++){
        if (array[i] == key)  
        return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter  the number";
    cin>>n;
      int array[n];
    for(int i=0; i<=n; i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key";
    cin>>key;
    int result = linearSearch(array,n,key);
    if(result==-1){
        cout << "Element is not present in array" ;
    }
    else{
        cout << "Element is present at index " << result ;
    }
    return 0;

}