#include <iostream>
#include <string>
using namespace std;

int main() {
          string name1;
          string name2;
          cout<<"Enter the name1"<<endl;
          getline(cin,name1);
          cout<<"Enter the name2"<<endl;
          getline(cin,name2);

          if(name1>name2){
            cout<<"It is greater than name2 string"<<endl;
          }

          else if(name2>name1){
            cout<<"It is greater than name1 string"<<endl;
          }
          else{
            cout<<"Both are equal name1 and name2"<<endl;
          }

    return 0;
}
