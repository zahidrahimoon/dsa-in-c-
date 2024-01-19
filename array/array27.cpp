#include<iostream>
using namespace std;
int main(){
    int array1[2][2]={{1,2},{3,4}};
    int array2[2][2]={{5,6},{7,8}};

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           cout<< array1[i][j]+array2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}