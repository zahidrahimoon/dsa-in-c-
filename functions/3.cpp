#include <iostream>
using namespace std;

int minofTwo(int a , int b){
  if(a<b){
    return a;
  }
  else{
    return b;
  }
}

int main() 
{
    std::cout <<  minofTwo(6,7)  << std::endl;
    return 0;
}
