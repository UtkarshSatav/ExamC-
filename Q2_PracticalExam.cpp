#include <iostream>
using namespace std;
int main(){
    int Marks;
    cout<<"Enter your marks: ";
    cin>>Marks;
    if(Marks>=90){
        cout<<"Grade: A";
    }
    else if(Marks>=75 && Marks<=89){
        cout<<"Grade: B";
        }
    else if(Marks>=50 && Marks<=74){
        cout<<"Grade: C";
        }
    else if(Marks<50){
        cout<<"Grade: F";
    }
}