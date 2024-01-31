#include<iostream>
#include<string>
using namespace std;
int main(){
   string zahid = "ZAHID";

   for(char& c : zahid){
    c= tolower(c);
   } 
   cout<< zahid <<endl;
   return 0;
}