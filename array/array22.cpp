#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int product = 1;
    int array[5] = {1, 2, 3, 2, 1};

    for(int i = 0; i < 5; i++){
        product *= array[i];
        count += product;
    }

    cout << "The product of all elements in the array is: " << product << endl;
    cout << "The sum of the products of the elements in the array is: " << count << endl;

    return 0;
}
