#include<iostream>
using namespace std;

int main() {
    const int size = 7;
    int array[size];
    int positiveNumbers = 0, negativeNumbers = 0, sumofpositive = 0, sumofnegative = 0, numberofzeros = 0;

    for (int i = 0; i < size; i++) {
        cout << "Enter the numbers " << i + 1 << endl;
        cin >> array[i];
    }

    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            numberofzeros++;
        }
        else if (array[i] > 0) {
            positiveNumbers++;
            sumofpositive += array[i];
        }
        else {
            negativeNumbers++;
            sumofnegative += array[i];
        }
    }

    cout << "Number of Positive Numbers: " << positiveNumbers << endl;
    cout << "Number of Negative Numbers: " << negativeNumbers << endl;
    cout << "Number of Zeros: " << numberofzeros << endl;
    cout << "Sum of Positive Numbers: " << sumofpositive << endl;
    cout << "Sum of Negative Numbers: " << sumofnegative << endl;

    return 0;
}
