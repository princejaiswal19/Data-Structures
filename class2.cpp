#include<iostream>
#include<string.h>
using namespace std;
class bank_account{
    private:
    string name;
    int accountnumber;
    string typeofaccount;
    int balanceinaccount;
    public:
    void enterbankmemberdetail(){
        cout<<"Enter the Name of the Member:";
         getline(cin >> ws, name);
        cin>>name;
        cout<<"Enter Account number:";
        cin>>accountnumber;
        cout<<"Account Type:";
        cin>>typeofaccount;
        cout<<"Balance In Account:";
        cin>>balanceinaccount;
        cin.ignore(); 
        // Clear the newline character left in the input buffer
        getline(cin >> ws,typeofaccount);
       }
        void displaybankmemberdetail() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountnumber << endl;
        cout << "Account Type: " << typeofaccount << endl;
        cout<<"Balance In Account"<<balanceinaccount<<endl;

    }

};
int main(){

  const int numMember = 5;
    bank_account Member[numMember];

    for (int i = 0; i < numMember; ++i) {
        std::cout << "Enter details for Member " << i + 1 << ":" << std::endl;
        Member[i].enterbankmemberdetail();
    }

    cout << endl << "Member Details:" << endl;
    for (int i = 0; i < numMember; ++i) {
        cout << "Details of Member " << i + 1 << ":" << endl;
        Member[i].displaybankmemberdetail();
        cout << endl;
    }


}
