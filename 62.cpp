#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
int main(){
    ofstream out;
    out.open("sample.txt");
    out<<"This id momey\n";
    out<<"This is momey\n";
    out<<"This my momey\n";
    out<<"This your momey\n";

    out.close();
    ifstream in;
    string st,st2;
    in.open("sample.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close(); 


    
    return 0;
}