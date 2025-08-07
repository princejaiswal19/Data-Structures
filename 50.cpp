#include<iostream>
using namespace std;
int main(){
    // basic example 
    int a=4;
    int*ptr=&a;
    // cout<<"the value of the pointer is "<<*(ptr)<<endl;
    float *p=new float(40.78);
    cout<<"The value at address p is "<<*p<<endl;
    int*arr=new int[3];
    arr[0]=24;
    arr[1]=56;
    arr[2]=76;
    delete[] arr;
    cout<<"The value at arr[0] stored is "<<arr[0]<<endl;
    cout<<"The value at arr[1] stored is "<<arr[1]<<endl;
    cout<<"The value at arr[2] stored is "<<arr[2]<<endl;
// delete operator





    return 0;
}