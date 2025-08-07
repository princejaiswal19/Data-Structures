#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setdata(int a, float b){
        id=a;
        price=b;
    }
    void getdata(void){
        cout<<"Code of this item is"<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;  
          }

};
int main(){
    int size=2;
    // int *ptr=&size;
    // int *ptr=new int[34];
    // general store
    // veggies
    // hardware
    shop *ptr=new shop[size];
    int p,q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Id and price of item"<<i+1;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr->getdata();

    }
     
    for (int i = 0; i < size; i++)
    {
     
    }
    




    return 0;
}