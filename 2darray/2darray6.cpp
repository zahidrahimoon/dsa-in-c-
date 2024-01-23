#include<iostream>
using namespace std;

int main() {
    int array[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 1, 1, 1}};
    int maxCount = 0;
    int maxIdx = -1;

    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (array[i][j] == 1) {
                count++;
            }
        }
        if (maxCount < count) {
            maxCount = count;
            maxIdx = i;
        }
    }

    cout << "Row with the maximum number of 1s is: " << maxIdx << " with count: " << maxCount << endl;

    return 0;
}
