#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    int col;
    cout << "Enter the number of columns: ";
    cin >> col;

    int array1[row][col];

    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> array1[i][j];
        }
    }

    // Transpose the matrix
    for(int i = 0; i < row; i++) {
        for(int j = i; j < col; j++) {
            // Swap array1[i][j] and array1[j][i]
            int temp = array1[i][j];
            array1[i][j] = array1[j][i];
            array1[j][i] = temp;
        }
    }
    //display transpose
      cout << "Rotated Matrix:" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    // Reverse the order of elements in each row
    for(int i = 0; i < row; i++) {
        int j = 0;
        int k = col - 1;
        while(j < k) {
            // Swap array1[i][j] and array1[i][k]
            int temp = array1[i][j];
            array1[i][j] = array1[i][k];
            array1[i][k] = temp;
            j++;
            k--;
        }
    }

    // Display the rotated matrix
    cout << "Rotated Matrix:" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
