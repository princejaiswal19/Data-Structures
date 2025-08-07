// #include<iostream>
// using namespace std;
// // default constructor
// // parameterized constructor ehich takes value from us
// class point{
//     int x,y;
// public:
// point(int a ,int b){
//     x=a;
//     y=b;

// }
// void displaypoint(){
//     cout<<"The point is("<<x<<","<<y<<endl;


     
// }
// };

// int main(){
//     point m(3,8);
//     m.displaypoint();
    
//     return 0;
// }
#include<iostream>
#include<cmath>

using namespace std;

class point{
int x,y;
void friend distance(point o1,point o2);
public:
point(int a,int b){
    x=a;
    y=b;

}
void display(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}

};
void distance(point o1,point o2){
    float dist;
    dist=sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
    cout<<"distance between the teo point is "<<dist<<endl;
}
int main(){
    point c1(5,6),c2(12,14);
    c1.display();
    c2.display();
    distance(c1,c2);


    
    return 0;
}