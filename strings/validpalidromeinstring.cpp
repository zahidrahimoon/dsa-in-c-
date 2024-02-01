#include <iostream>
#include <string>
using namespace std;

int main() {
    string Palindrome = "zahid";
    int num = Palindrome.length();
    bool isPalidrome = true;

    for (int i = 0; i < num; i++) {
        if (Palindrome[i] != Palindrome[num - 1 - i]){
                isPalidrome = false;
        }
    }
    if(isPalidrome){
           cout << "Given Number is a valid Palindrome: " << Palindrome << endl;
    } else {
        cout << "Given Number is not a valid Palindrome" << endl;
    }
    return 0;
}
