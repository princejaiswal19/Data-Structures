#include<iostream>
#include<string.h>

using namespace std;


class binary{
    string s;
    public:
    void read(void);
    void chk_bin(void);

    
};
void binary::read(){
    cout<<"Enter a binary Number"<<endl;
    cin>>s;
}
void binary::chk_bin(){
    for (int  i = 0; i < s.length(); i++)
    {
       if(s.at(i)!='0'&& s.at(i)!='1'){
        cout<<"iNcorrect bianry nformat"<<endl;
        exit(0);
       }
       
       
       
    }
     cout<<"yes number"<<endl;
}
int main(){
    binary b;
    b.read();
    b.chk_bin();
    
    return 0;
}