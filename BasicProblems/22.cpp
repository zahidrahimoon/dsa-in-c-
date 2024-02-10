#include<iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nThe sum of odd numbers is " << sum << endl;

    return 0;
}
