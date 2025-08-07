#include<iostream>
// destructor
using namespace std;
class num{
    int count=0;
    public:
    num(){
        count++;
        cout<<"this is time when constructor called for object number"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when destructor is called for object number"<<count<<endl;
        count--;
    }

};
int main(){
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;

    }
    cout<<"Back to main "<<endl;
    
    return 0;
}