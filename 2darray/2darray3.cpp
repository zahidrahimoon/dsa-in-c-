#include<iostream>
#include<climits>
using namespace std;
int main(){
int row=3;
int col=3;

int array[row][col]={{1,2,3},{4,5,6},{7,8,9}};

int maxElement=INT_MIN;
int minElement=INT_MAX;
int minrow,maxrow,mincol,maxcol;

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){

        if(array[i][j]>maxElement){
            maxElement = array[i][j];
            maxrow = i;
            maxcol=j;
        }

        if(array[i][j]<minElement){
            minElement=array[i][j];
            minrow = i;
            mincol = j;
        }
    }
    
}
     cout<<"Maximum Element :"<<maxElement <<" at position ("<<maxrow <<"," <<maxcol<<")\n"; 
     cout<<"Minimum Element :"<<minElement <<" at position ("<<minrow <<"," <<mincol<<")\n";

     return 0; 
}