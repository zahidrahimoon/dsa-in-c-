#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number of elements in the array: ";
    cin>>num;
    int sum=0;
    int array[num];

    for(int i=0; i<num; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin>>array[i];
        sum+=array[i];
    }
    cout<<"The Sum of the array[i] is ="<<sum<<endl;

    return 0;
}