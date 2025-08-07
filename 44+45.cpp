#include<iostream>
using namespace std;
/* student --> test
student--> sports
test-result
sports -> result
*/
 class  student{
    protected:
    int rollnumber;
    public:
    void setnumber(int a)
{
    rollnumber=a;

}
void printnumber(){
    cout<<"The roll number is "<<rollnumber<<endl;
}

};
class Test : virtual public student{
    protected:
    float maths, physics;
    public:
    void setmarks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void printmarks(){
     cout<<"your result is here:"<<endl
         << "Maths"<<endl
         << "physics"<<endl;  
    }
    

};
class sports: virtual public student{
protected:
float score;
public:
void setscore(float sc){
    score=sc;
}
void printscore(void){
    cout<<"Your pt score is"<<score<<endl;
}

};
class result: public Test,public sports{
  private:
  float total;
  public:
  void display(void){
    total=maths+physics+score;
    printnumber();
    printmarks();
    printscore();
    cout<<"Your total score is:"<<total<<endl;
  }
};

int main(){
     result hary;
     hary.setnumber(4200);
     hary.setmarks(78.9,45.8);
     hary.setscore(46.0);
     hary.display();
    return 0;
}