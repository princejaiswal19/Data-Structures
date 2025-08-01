#include<iostream>
using namespace std;
int main(){

    int marks[4]={12,45,25,15};
    int mathmarks[]={87,56,89,96};
    cout<<"maths marks is:"<<mathmarks[0];
    cout<<"maths marks is:"<<mathmarks[1];
    cout<<"maths marks is:"<<mathmarks[2];
    cout<<"maths marks is:"<<mathmarks[3];
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
 for (int i = 0; i < 4; i++)
 {
    cout<<"marks scored by the janwaar is :"<<i<<"is"<<marks[i]<<endl;
 }
 int i=0;
 while (i<4)
 {
cout<<"marks scored by the janwaar is :"<<i<<"is"<<marks[i]<<endl;
i++;
 }
 //pointers in array
 int*p=marks;
 cout<<"the value of *p is"<<*p<<endl;
 cout<<"the value of *(p+1) is"<<*(p+1)<<endl;
 cout<<"the value of *(p+2) is"<<*(p+2)<<endl;
 cout<<"the value of *(p+3) is"<<*(p+3)<<endl;
 return 0;
 }
 

   
