// BinarySearching

#include<iostream>
using namespace std;
int BinarySearching(int array[],int num,int key){
        int low=0;
        int high=num-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(array[mid]==key){ 
            return mid;
            }
            else if(array[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }

int main(){
    int num;
    cin>>num;

    int array[num];
    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    cout<<endl;

    int key;
    cin>>key;
    int result = BinarySearching(array,num, key);

    if(result==-1){
        cout<<"Element is not found"<<endl;
    }
    else{
        cout<<"Element is found at Index :"<<result<<endl;

    }
    return 0;
}