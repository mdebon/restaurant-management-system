//Marion Debon

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Login
{
    public:
        //The method login() asks the user to enter their email and password until
        //their email and password match.
        void login()
        {
            bool accountMatch = false;

            do
            {
                string email, password;

                cout << "** Login to your account **" << endl;
                cout << "Email: ";
                cin >> email;
                cout << "\n";
                cout << "Password: ";
                cin >> password;

                accountMatch = findAccount(email, password);
                if (accountMatch = true)
                    startSession(email);
                else
                    cout << "Invalid email or password. Please try again." << endl;

            } while (accountMatch = false); //loops until it finds an account match
            
        }

        //The method findAccount checks if the email entered by the user already
        // has an account. If it does, it checks if the password entered matches
        // the one on the account. If email is not found or password is incorrect,
        // the method returns false.
        bool findAccount(string email, string pw)
        {
            string filename = email + ".txt";

            try
            {
                ifstream existingaccount(filename);
            }
            catch(const std::exception& e)
            {
                return false;
            }
            ifstream existingaccount(filename);
            string line;
            while(getline(existingaccount, line))
            {
                if(line.find(pw) != string::npos)
                    return true;
            }
            return false;
            
        }

        void startSession(string email)
        {
            string filename = email + ".txt";
            ifstream account(filename);

        }
};
