#include<iostream>
using namespace std;
int main(){

int sum = 0;

int array[5] ={64,74,84,96,56};

for(int i=0; i<5; i++){
    for(int j=0; j<2; j++){
        sum+=array[i];
    }
    cout<<"the sum of"<<array[i]<< "="<<sum <<endl;

}
return 0;
}