// #include<iostream>
// using namespace std;
// class Y;
// class X{
// int data;
// void friend add(X o1,Y o2);
// public:
// void  setValue(int value){
//     data=value;

// }
// };
// class Y{
//     int num;
//     void friend add(X o1,Y o2);
//     public:
//     void setvalue(int value){
//         num=value;
//     }

// };
// void add(X o1,Y o2){
//     cout<<"Summing data of X and Y:"<<o1.data+o2.num<<endl;
// }


// int main(){
//     X a;
//     a.setValue(4);
//     Y b;
//     b.setvalue(7);
//     add(a,b);
//     // cout<<"number after adding is the value of "<<add(a,b)<<endl;

    
//     return 0;
// }
#include<iostream>
using namespace std;
class c2;
class c1{
    
    int val1;
    void friend exchange(c1 &x, c2&y);
    public:
    void indata(int a)
    {
        val1=a;

    }
    void display(){
        cout<<val1<<endl;
    }

};
class c2{

    int val2;
    void friend exchange(c1 &x,c2 &y);
    public:
    void indata(int a)
    {
        val2=a;

    }
    void display(){
        cout<<val2<<endl;
    }

};
void exchange(c1 &x, c2&y){
    int tmp=x.val1;
    x.val1=y.val2;
    y.val2=tmp;
}

 

int main(){
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(48);
    exchange(oc1,oc2);
    cout<<"the value after exchaging becomes :"<<endl;
    oc1.display();
     cout<<"the value after exchaging becomes :"<<endl;
    oc2.display();
    
    
    
    return 0;
}