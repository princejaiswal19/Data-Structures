#include<iostream>
using namespace std;
/*
syntax for initilization list in constructor:
constructor(argumenent list): initilization section
{
    assignment + other code;
}
class test {
    int a;
    int b;
    public:
    test(int i, int j): a(i),b(j){constructor body}
};

*/
class test{
int a;
int b;
public:
test(int i, int j):a(i),b(j+5)
{
cout<<"Constructor is called"<<endl;
cout<<"the value of a is"<<a<<endl;
cout<<"the value of b is "<<b<<endl;
}
};
int main(){
    test a(4,5);

    // initilization list in constructor
    return 0;
}