// oops class object constructor destructor encapsulation data abstraction
// #include<iostream>
// using namespace std;

// class Fruit{
//     public:
//  string name;
//  string color;


// };

// int main(){
//     Fruit apple;
//     apple.name="Apple";
//     apple.color="red";
//     cout<<apple.name<<"_"<<apple.color<<endl;

//     Fruit *mango= new Fruit();
//     mango->name="mango";
//     mango->color="yellow";
//     cout<< mango->name<<"and"<<mango->color<<endl;
    
//     return 0;
// }
// #include<iostream>
// using namespace std;

// class Rectangle{
//     public:
//     int l;
//     int b;
//     Rectangle(){// default constructor- no arguments passed
//     l=0;
//     b=0;
//     }
//     Rectangle(int x , int y)
//     {//parametrized constuctor - arguments passsed
//     l=x;
//     b=y;

//     }
//     Rectangle(Rectangle & r){//copy constructor- initialise an object by another existing object
//     l=r.l;
//     b=r.b;
//     }
//     ~Rectangle(){
//         cout<<"destructor ids called"<<endl;
//     }

// };
// int main(){
//     Rectangle *r1= new Rectangle;

//     cout<<r1->l<<" "<<r1->b<<endl;
//     delete r1;

//     Rectangle r2(4,5);
//     cout<<r2.l<<" "<<r2.b<<endl;
//     Rectangle r3=r2;
//     cout<<r3.l<<" "<<r3.b<<endl;
    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class ABC {
//     int x;
//     public:
//     void set(int n){
//         x=n;
//     }
//     int get(){
//         return x;
//     }

// };
// int main(){
//     ABC obj1;
//     obj1.set(3);
//     cout<<obj1.get()<<endl;
    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class abc{
// public :
// int x;
// protected:
// int y;
// private:
// int z;


// };

// class child1: public abc{

// };
// class child2: private abc{


// };
// class child3: protected abc{


// };


// int main(){
//     abc p;
//     p.x=34;
//     cout<<p.x<<endl;
    

    
//     return 0;

// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     Parent(){
//   cout<<"Parent class"<<endl;

//     }

// };
// class child:public Parent{
//     public:
//     child(){
//         cout<<"this is child ckass"<< endl;
//     }

// };
// int main(){
//     child c;

   
//     return 0;
// }
// polymorphism
#include<iostream>
using namespace std;
class Complex {
    public:
   int real ;
   int img;
   Complex(int x, int y){
    real=x;
    img=y;
   }
   Complex operator+(Complex&c){
    
   }


};   
int main(){
    
    return 0;
}
