
// default arguments
#include<iostream>
using namespace std;
class simple{

int data1;
int data2;
public:
simple(int a, int b=8){
    data1 =a;
    data2=b;
}
void printdata();

};
void simple::printdata(){
    cout<<"value of a is"<<data1<<"and value of b is "<<data2<<endl;

}


int main(){
    simple s(1,4);
    s.printdata();
    return 0;
}