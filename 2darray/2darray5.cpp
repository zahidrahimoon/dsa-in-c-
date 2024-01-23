#include<iostream>
#include<climits>
using namespace std;
int main(){

    int row=3;
    int col=3;
    
    int array[row][col]={{1,2,3},{3,4,5},{4,5,6}};
    int maxsum=INT_MIN;
    int maxsumrow= -1;

    for(int i=0; i<row; i++){
        int sumrow =0;
        for(int j=0; j<col; j++){
            sumrow+=array[i][j];
        }
        if(sumrow > maxsum){
            maxsum =sumrow;
            maxsumrow =i;
        }
    }
    if(maxsumrow!=-1){
     cout << "Row with the maximum sum is Row " << maxsumrow + 1 << " with sum: " << maxsum << endl;
    } else {
     cout << "Matrix is empty." << endl;
    }
    return 0;
}