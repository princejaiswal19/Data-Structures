#include<iostream>
using namespace std;
//inheritance 
class employee{ //base class
   
   
    public:
     int id;
     float salary;
    employee(int inpid){
        
        id=inpid;
        salary=34.0;
    }
    employee(){

    }
    

};
// derived class syntax
/*class {{derived class name }}: {{visibility-mode}}{{base class name}}
{
    class members /method/etc
}*/
//creating a programmer class derived from employee base class

class programmer :  employee{
    public://default visibility mode is private
    //private visibility mode public members of the base class
    int languagecode=9;
    programmer(int inpid){
        id=inpid;
    }
    void getdata(){
        cout<<id<<endl;
    }

};

int main(){
    employee harry(1),rohan(3);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(1);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    return 0;
}