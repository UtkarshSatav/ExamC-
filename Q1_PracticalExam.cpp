#include <iostream>
using namespace std;
class A{
    public:
    A(int a,int b){
        cout<<"Sum of two numbers is ";
        cout<<a+b<<endl;
        }
};
int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    A obj(a,b);
    return 0;
}

