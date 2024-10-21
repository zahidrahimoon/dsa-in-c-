#include <iostream>
using namespace std;

int digitSum(int num){
  int sumdig=0;
  while(num > 0){
    int lastdigit= num %10;
    num = num/10;
    
    sumdig+=lastdigit;
  }
  return sumdig;
}

int main() 
{
   cout<<digitSum(123)<<endl;
    return 0;
}
