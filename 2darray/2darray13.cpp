// Write a program in C++ that inputs the temperature values of entire week and displays the day on which we had maximum and minimum temperature.
#include<iostream>
using namespace std;
int main(){
    const int size = 7;
    int maxIndex=0, minIndex=0;
    float temp[size];

     for(int i=0; i<size; i++){
        cout<<"Enter the temperature for day"<<i+1<<endl;
        cin>>temp[i];
     }

   for(int i=0; i<size; i++){
    if(temp[i] > temp[maxIndex]){
        maxIndex = i;
    }
    if(temp[i] < temp[minIndex]){
        minIndex = i;   
    }
}

     switch(maxIndex){
        case 0: cout<<"Maximimum temperature is "<<temp[maxIndex]<<" on Monday"<<endl; break;
        case 1: cout<<"Maximimum temperature is "<<temp[maxIndex]<<" on Tuesday"<<endl; break;
        case 2: cout<<"Maximimum temperature is "<<temp[maxIndex]<<" on Wednesday"<<endl; break;
        case 3: cout<<"Maximimum temperature is "<<temp[maxIndex]<<" on Thursday"<<endl; break;
        case 4: cout<<"Maximimum temperature is "<<temp[maxIndex]<<" on Friday"<<endl; break;
        case 5: cout<<"Maximimum temperature is "<<temp[maxIndex]<<" on Satday"<<endl; break;
        case 6: cout<<"Maximimum temperature is "<<temp[maxIndex]<<" on Sunday"<<endl; break;
     }
     switch(minIndex){
        case 0: cout<<"Minimum temperature is "<<temp[minIndex]<<" on Monday"<<endl; break;
        case 1: cout<<"Minimum temperature is "<<temp[minIndex]<<" on Tuesday"<<endl; break;
        case 2: cout<<"Minimum temperature is "<<temp[minIndex]<<" on Wednesday"<<endl; break;
        case 3: cout<<"Minimum temperature is "<<temp[minIndex]<<" on Thursday"<<endl; break;
        case 4: cout<<"Minimum temperature is "<<temp[minIndex]<<" on Friday"<<endl; break;
        case 5: cout<<"Minimum temperature is "<<temp[minIndex]<<" on Satday"<<endl; break;
        case 6: cout<<"Minimum temperature is "<<temp[minIndex]<<" on Sunday"<<endl; break;
     }
    return 0;
}
