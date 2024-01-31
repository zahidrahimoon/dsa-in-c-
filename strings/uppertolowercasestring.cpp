#include<iostream>
#include<string>
using namespace std;
int main(){
   string zahid = "ZAHID";

   for(char& c : zahid){
    c= toupper(c);
   } 
   cout<< zahid <<endl;
   return 0;
}