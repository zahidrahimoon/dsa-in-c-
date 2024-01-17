//finding te 2 largest number in array
#include<iostream>
#include<climits>
using namespace std;
int SecondNUmber(int array[],int size){
    int firstnumber=INT_MIN;
    int secondnumber=INT_MIN;

    for(int i=0; i<size; i++){
        if (array[i] > firstnumber) {
            secondnumber = firstnumber;
            firstnumber = array[i];
        }
        else if(array[i]>secondnumber && array[i]<firstnumber){
            secondnumber = array[i];
        }
    }
  return secondnumber;

}
int main() {
    int num;
    cout<<"Enter the number of Element of array";
    cin>>num;

    int array[num];

    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    for(int i=0; i<num; i++){
        cout<<"The Elements of array are :"<<array[i]<<endl;
    }
     int secondLargest=SecondNUmber(array, num);

     if(secondLargest!=INT_MIN){
        cout<<"\nThe Second Largest Number is : " << secondLargest ;
     }
     else{
        cout<<"\nThere is no second largest element in this Array.";
     }

    return 0;
}