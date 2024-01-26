#include<iostream>
using namespace std;
int main(){
 int row = 3;
 int col = 3;
 int array1[row][col]={{1,2,3},{4,5,6},{7,8,9}};


    for(int i=0; i<row; i++){
        if(i%2==0){
        for(int j=0;j<col;j++){
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
        }
        else
        {
          for(int j=col-1;j>=0;j--){
            cout<<array1[i][j]<<" ";   
        }
        cout<<endl;
    }
    }

return 0; 
}