#include<iostream>
using namespace std;
int main(){
    int arr[4];
    int *ptr=arr;
    *(ptr+1)=arr[1];
    


    return 0;
}