#include <iostream>
#include <fstream>
#include "AccountClass.cpp"

using namespace std;

//function to show Account details
void displayAccount() {


  string name;
  string emailAddress;
  string phoneNumber;
  


    cout << "-------------------------------------------------------------------------" << endl;
   
    cout << "NAME OF CUSTOMER : " << name << endl;
    cout << "EMAIL ADDRESS    : " << emailAddress << endl;
    cout << "PHONE NO.  : " <<phoneNumber<< endl;
    cout << "-------------------------------------------------------------------------" << endl;

    system("pause");

}