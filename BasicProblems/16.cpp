#include<iostream>
using namespace std;
int main(){
    const double PI=3.142;
    double diamterA=15.0;
    double diamterB=20.0;

    double radiusA=diamterA/2.0;
    double radiusB=diamterB/2.0;

    double timeNetash ,timeZahid;
    cin>>timeNetash>>timeZahid;

    double speedNetash=(PI*diamterA)/timeNetash;
    double speedZahid=(PI*diamterB)/timeZahid;

    if(speedNetash>speedZahid){
        cout<<"Speed netash is greator than zahid"<<endl;
    }
    else if(speedZahid>speedNetash){
        cout<<"Speed Zahid is greator than speed netash"<<endl;
    }
    else{
        cout<<"Both run at same time";
    }
    return 0;
}
