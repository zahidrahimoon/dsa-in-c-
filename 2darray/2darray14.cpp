#include<iostream>
using namespace std;

int main(){
    const int students =5;
    const int tests =3;
    int roll_number[students];
    int marks[students][tests];

    for(int i=0; i<students; i++){
        cout<<"Enter the roll number of student "<<i+1<<": ";
        cin>>roll_number[i];
        cout<<"Enter the marks for "<<i+1<<" student in three sessional tests: ";
        for(int j=0; j<tests; j++){
            cin>>marks[i][j];
        }
    }

    int total[students];
    for(int i=0; i<students; i++){
        int best1 = -1 , best2 = -1 ;

        for(int j=0; j<tests; j++){
            if(marks[i][j] > best1){
                best2 = best1;
                best1 = marks[i][j];
            }
            else if(marks[i][j] > best2 && marks[i][j] != best1){
                best2 = marks[i][j];
            }
        }
        total[i]= best1+best2;
    } 
   
   cout<<"Total marks for each student: "<<endl;

   for(int i=0; i<students; i++){
    cout<<"Student "<<roll_number[i]<<":"<<total[i]<<endl;
   }
    return 0;
}