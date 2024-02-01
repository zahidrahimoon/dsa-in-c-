#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
          string name1 = "zahid";
          string name2 = "azihd";

          int length1 = name1.length();
          int length2 = name2.length();
          bool isAnagram = true;

          if(length1 != length2) isAnagram = false;
          else{
            sort(name1.begin(),name1.end());
            sort(name2.begin(),name2.end());

            for(int i=0; i<length1; i++){
                if(name1[i]!=name2[i]){
                    isAnagram= false;
                    break;
                }
            }
          }
          if(isAnagram){
            cout<<"It is anagram!"<<endl;
          }
          else{
            cout<<"It is not anagram!"<<endl;
          }

    return 0;
}
