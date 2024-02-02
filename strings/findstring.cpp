#include <iostream>
#include <string>
using namespace std;

int main() {
          string text = "Dawood University of Eng and technology";
          int index1 = text.find("University");
          int index2 = text.find("Of");
          int index3 = text.find("Technology");

          if(index1!=string::npos){
            cout<<"First Search Found at Location"<<index1<<endl;
          }

          if(index2!=string::npos){
            cout<<"second Search Found at Location"<<index2<<endl;
          }

          if(index3!=string::npos){
            cout<<"third Search Found at Location"<<index3<<endl;
          }


    return 0;
}
