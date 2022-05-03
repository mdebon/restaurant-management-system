//Marion Debon

#include<iostream>
#include<string>
#include "AccountClass.cpp"

using namespace std;

class SignUp
{
    public:
        //The signUp() method asks the user to enter information for a new
        //account, then creates a new account with the Account class.
        void signUp()
        {
            string name, email, password, phone;
            int zip;

            cout << "** Sign up for a customer account **" << endl;
            cout << "Name: ";
            cin >> name;
            cout << endl << "Email address: ";
            cin >> email;
            cout << endl << "Set a password: ";
            cin >> password;
            cout << endl << "Phone number: ";
            cin >> phone;
            cout << endl << "Zip code: ";
            cin >> zip;

            Account newAccount;
            newAccount.createAccount(email, password, name, phone, zip);

        }
};
