#include<iostream>
using namespace std;
class Employee{
    int Id;
     int static count;
    public:
    void setdata(){
        cout<<"Enter the Id"<<endl;
        cin>>Id;
        count++;

    }
    void getdata(){
        cout<<"The id of this employee is "<<Id<<"and this is employee number "<<count<<endl;
        
    }

};
int Employee ::  count;
int main(){
    Employee harry, prince, rahul;
    harry.setdata();
    harry.getdata();
    
    prince.setdata();
    prince.getdata();

    
    rahul.setdata();
    rahul.getdata();
    return 0;
}