#include<iostream>
using namespace std;
class student {
    protected:
    int roll_number;
    public:
    void set_roll_number(int n){
    roll_number=n;
    }
    void get_roll_number();


};
void student:: get_roll_number(){
    cout<<"the roll number is the "<<roll_number<<endl;
}
class exam: public student{
   protected:
   float maths;
   float physics;
   public:
   void set_marks(float,float);
   void get_marks();
};
void exam:: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam:: get_marks(){
    cout<<"the marks obtained in maths are: "<<maths<<endl;
    cout<<"the marks obtained in physics are:"<<physics<<endl;
}
class result : public exam{
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"Your percentage is "<<(maths+physics)/2<<endl;
    }

};
int main(){
    result prince;
    prince.set_roll_number(435);
    prince.set_marks(95.0,98.0);
    prince.display();

    
    return 0;
}