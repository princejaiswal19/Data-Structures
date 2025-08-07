#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    friend complex sumcomplex(complex o1, complex o2);
    public:
    void setnumbers(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnumbers(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }

};
complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumbers((o1.a+o2.a),(o1.b+o2.b));

  return o3;

}
int main(){
    complex c1,c2,sum;
    c1.setnumbers(1,4);
    c2.setnumbers(5,8);
    c1.printnumbers();
    c2.printnumbers();

    sum =sumcomplex(c1,c2);
    sum.printnumbers();
    
    return 0;
}