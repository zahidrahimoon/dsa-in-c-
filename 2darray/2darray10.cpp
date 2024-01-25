#include<iostream>
using namespace std;
int main(){
    int row = 3;
    int col = 3;
    int array1[row][col]={{1,2,3},{1,2,3},{1,2,3}};
    int array2[row][col]={{3,2,1},{3,2,1},{3,2,1}};
    int array3[row][col];
    int rc=3; 
       for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            array3[i][j]= 0;
               for(int k=0; k<rc; k++){
              array3[i][j]+=array1[i][k]*array2[k][j];
        }
     }
    }

    for(int z=0; z<row; z++){
        for(int y=0; y<col; y++){
            cout<<array3[z][y]<<" ";
        }
        cout<<endl;
    }

return 0; 
}