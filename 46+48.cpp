#include<iostream>
// constuctor in derived class
using namespace std;
class base1{
    int data1;
    public:
    base1(int i)
    {
        data1=i;
        cout<<"Base1 class constructor callled"<<endl;
    }
    void printdatabase1(void){
        cout<<"The value of data1 is "<<data1<<endl;
            }
    
};
class base2{
 int data2;
 public:
 base2(int i){
 data2=i;
 cout<<"Base2 class constructor is called"<<endl;
 }
 void printdatabase2(void){
        cout<<"The value of data2 is "<<data2<<endl;
            }
    

}; 
class derived :public base1, public base2{
    int derived1, derived2;
    public:
    derived(int a, int b,int c, int d):base1(a),base2(b){
        derived1=c; 
        derived2=d;
        cout<<"Derived class constructor called"<<endl;
        
    }
    void printdataderived(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
         cout<<"The value of derived2 is "<<derived2<<endl;
    }
    
};
int main(){
/*
casee 1
class b: public{
// order of constructin - first a then b
};
case2
class a: public b,public c{
    // order of execution of constructor - b then c then a
}
case 3
class a : public b,virtual public c{
    // order of execution is c then b then a
}

*/
    derived prince(1,2,3,4);
    prince.printdatabase1();
    

    return 0;
}