#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //  creating constructor
    // constructor is a special member function with same name of the class 
    // it is used to initiliaze the objects of its class;
    complex(void);
     void printnumbers(){
        cout<<"YOur numbar is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(void){
    a=10;
    b=0;
}
int main(){
complex c;
c.printnumbers();

     
    return 0;
}