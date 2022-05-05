//Marion Debon
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Account
{
    public:
        int permissionLevel;
        string emailAddress;
        string password;
        string name;
        string phoneNumber;
        int zipCode;

        // This method creates a new account with the information entered by the user.
        // It stores the information in a textfile so the user can login later.
        void createAccount(string email, string pw, string n, string phone, int zip)
        {
            permissionLevel = 1;
            emailAddress = email;
            password = pw;
            name = n;
            phoneNumber = phone;
            zipCode = zip;

            string filename = email + ".txt";
            ofstream account(filename);

            account << permissionLevel << "\n";
            account << emailAddress << "\n";
            account << password << "\n";
            account << name << "\n";
            account << phoneNumber << "\n";
            account << zipCode << "\n";

            account.close();
        }

};
