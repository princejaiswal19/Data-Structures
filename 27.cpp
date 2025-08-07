#include<iostream>
using namespace std;
// forward declaration 
class complex;
class calculator{
    public:
    int add(int a, int b){
        return(a+b);

    }
    int sumrealcomplex(complex,complex);

};
class complex{
    int a,b;
    friend int calculator:: sumrealcomplex(complex,complex);
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;

    }
    void printnumbers(){
        cout<<"YOur numbar is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator::sumrealcomplex(complex o1,complex o2){
    return(o1.a+o2.a);
}

int main(){
    complex c1,c2;
    c1.setnumber(1,4);
    c2.setnumber(5,7);
    calculator calc;
    int res=calc.sumrealcomplex(c1,c2);
    cout<<"the sum of c1 and c2 is"<<res<<endl;

    return 0;
}