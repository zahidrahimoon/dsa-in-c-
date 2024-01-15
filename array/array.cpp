#include <iostream>
#include <climits>
using namespace std;

int main() {
    int array[5];

    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < 5; i++) {
        if (array[i] > max) {
            max = array[i];
        }

        if (array[i] < min) {
            min = array[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}
