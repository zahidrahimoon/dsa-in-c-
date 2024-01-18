#include<iostream>
using namespace std;
int BestTime(int array[],int arraySize,int array1[],int array1Size){
    int maximum_profit=0;

    for(int i=0; i<arraySize; i++){
        for(int j=0; j<array1Size; j++){
            if(array[i]+array1[j]>maximum_profit){
                maximum_profit = array[i]+array1[j];
            }
        }
    }
    return maximum_profit;
} 

int main() {
    int array[5] = {45, 67, 89, 90, 89};
    int array1[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int j = 0; j < 5; j++) {
        cout << array1[j] << " ";
    }
    cout << endl;

    int result = BestTime(array, 5, array1, 5);
    cout << "Maximum Profit: " << result << endl;

    return 0;
}
