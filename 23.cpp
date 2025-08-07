#include<iostream>
using namespace std;
class shop {
int itemId[100];
int itemPrice[100];
int counter;
public:
void initcounter(){
    counter=0;
}
void setPrice();
void displayPrice();


};
void shop::setPrice(){
    cout<<"Enter ID of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"ENter the prce of the given item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayPrice(){
    for(int i=0;i<counter;i++){
        cout<<"price of the item with Id"<<itemId[i]<<"is"<<itemPrice[i];

    }
}

int main(){
    shop dukan;
    dukan.initcounter();
    dukan.setPrice();
      dukan.setPrice();
        dukan.setPrice();
        dukan.displayPrice();


    
    return 0;
}