#include <iostream>
#include <string>
using namespace std;

int main() {
          string text = "Dawood University of Eng and technology";
          cout<<text.substr(1,7);  //it gives b/w 1 to 7
          cout<<text.substr(6); //it gives all after index  6

    return 0;
}
