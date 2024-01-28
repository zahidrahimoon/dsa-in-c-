#include<iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 3;
    int array1[row][col] = {{1,2,3},{1,2,3},{1,2,3}};
 for (int j = 0; j < col; j++) {
     if (j % 2 == 0) {
         for (int i = row - 1; i >= 0; i--) {
             cout << array1[i][j] << " ";
         }
     } else {
         for (int i = 0; i < row; i++) {
             cout << array1[i][j] << " ";
         }
     }
     cout << endl;
 }
 return 0;
}
