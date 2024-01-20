#include<iostream>
using namespace std;
int main(){
    int row=3;
    int col=3;

    int array[row][col]={{1,2,3},{4,5,6},{7,8,9}};
    int array1[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
          array1[i][j]=array[j][i];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array1[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}