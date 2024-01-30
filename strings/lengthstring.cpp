#include<iostream>
using namespace std;
int main(){

      char a[]={'Z','A','H','I','D','\0'};
      int count = 0;


      for(int i = 0; a[i] != '\0'; i++) {
            count ++;
      }
      cout<<"The Length of the string is "<<count<<endl;

      return 0;
}