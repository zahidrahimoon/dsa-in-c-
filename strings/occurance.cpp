#include<iostream>
#include<string>
using namespace std;
int main(){
    string text;
    int occurence = 0;

    cout<<"Enter the text";
    getline(cin , text , '!');
    int foundindex  = text.find("the");

    while(foundindex!=string::npos){
        occurence++;
        foundindex= text.find("the" ,foundindex);
    }

    cout<<"Number of occurences: "<<occurence;


    return 0;

}