#include <iostream>
using namespace std;
int main(){
    int angle;
    cout << "Enter the value of angle: ";
    cin>>angle;
    if(angle>=0 && angle<90){
    cout<<"It is an acute angle";
    }
    else if(angle==90){
        cout<<"It is a right-angle ";
    }
    else if(angle>90  && angle<=180){
        cout<<"It is an obtuse angle";
    }
    else{
        cout<<"Invalid input";
    }
    return 0;
}
