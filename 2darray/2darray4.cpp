#include<iostream>
using namespace std;
int main(){
    int row =4;
    int col =4;
    int sum =0;

    int array[row][col]={{1,2,3,4},{1,2,3,4},{4,5,6,7},{6,8,9,10}};

    for(int i=0; i<3; i++){
        for(int j=1; j<col; j++){
            cout<<array[i][j]<<" ";
            sum+=array[i][j];
        }
        cout<<endl;
    }
    cout<<"The sum of the array"<<sum<<endl;
    return 0;
}