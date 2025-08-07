// #include<iostream>
// #include<fstream>
// #include<string.h>

// using namespace std;
// int main(){
    
//    string name,st2;

//   ofstream out("sample61.txt");
//   cout<<"Enter Your name:"<<endl;
//   cin>>name;
//   out<<name;
//   out<<name +"My name is ";
//   out.close();

//   ifstream pin("sample61.txt");
//   pin>>st2;
//   cout<<"The content derived from file is:"<<st2;

//     return 0;
// }
// #include <iostream>
// #include <fstream>
 
// using namespace std;
 
// int main()
// {
 
//     // declaring an object of the type ofstream
//     ofstream out;
 
//     //connecting the object out to the text file using the member function open()
//     out.open("sample61.txt");
 
//     //writing to the file
//     out <<"This is me\n";
//     out <<"This is also me";
//     //closing the file connection
//     out.close();
//     ifstream in;
//     string st2;
//     in.open("sample61.txt");
//     while(in.eof()==0)
//     {
//       getline(in,st2);
//       cout<<st2;
//     }
//     return 0;
// }
// stl
 