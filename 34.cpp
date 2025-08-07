#include<iostream>
using namespace std;
// copy constructor
class Number{
int a;
public:
Number(){
}
Number(int num){
    a=num;
    }
    void display(){
        cout<<"The number for this object is"<<a<<endl;
    }
};
int main(){
    Number x,y,z;
    
    return 0;
}