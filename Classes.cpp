#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<chrono>
#include<iomanip>
#include<cmath>

using namespace std;

class MenuUpdateReport
{
	public:
		void menuUpdateReport()
		{


        	string itemName;
        	bool availability;
        	float price;
        	string menuUpdateDate;
        	string menuUpdateTime;
        	string priceUpdateDate;
        	string priceUpdateTime;



        	cout << "-------------------------------------------------------------------------" << endl;

        	cout << "ITEM NAME : " << itemName << endl;
        	cout << "Price     : " << price << endl;
        	cout << "Avalability  : " << availability << endl;
        	cout << "MENU UPDATE DATE  :" << menuUpdateDate << endl;
        	cout << "MENU UPDATE TIME  :" << menuUpdateTime << endl;
        	cout << "PRICE UPDATE DATE  :" << priceUpdateDate << endl;
        	cout << "PRICE UPDATE TIME  :" << priceUpdateTime << endl;

    
        	cout << "-------------------------------------------------------------------------" << endl;

  		}
};

class reservationReport
{
	public:
    	string name;
    	bool reservationStatus;
    	string reservationTime;
    	string reservationDate;

    	void reservationInfo(){

      	cout << "-------------------------------------------------------------------------" << endl;

      	cout << "NAME OF RESERVER : " << name << endl;
      	cout << "DATE OF RESERVATION    : " << reservationDate << endl;
      	cout << "TIME OF RESERVATION  : " << reservationTime << endl;
      	cout << "reservationStatus  :" << reservationStatus << endl;
    
      	cout << "-------------------------------------------------------------------------" << endl;
    }
};

// Marion Debon
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

// Marion Debon
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

// Marion Debon
class Login
{
    public:
        //The method login() asks the user to enter their email and password until
        //their email and password match.
        string login()
        {
            bool accountMatch = false;

           	string email, password;
		    string session;

            cout << "** Login to your account **" << endl;
            cout << "Email: ";
            cin >> email;
            cout << "\n";
            cout << "Password: ";
            cin >> password;

            accountMatch = findAccount(email, password);
            if (accountMatch = true)
            {
                session = startSession(email);
		        return session;
            }
            else
                return "0";
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

        string startSession(string email)
        {
            string account = email + ".txt";
            ifstream fin (account);
		    string permissionLevel, line;
			
		    while(getline(fin, line))
			    permissionLevel = line.substr(0, line.find_first_of(" ", 0));
		
		    return permissionLevel;

        }
};

class ReservationManagement
{
    public:
		string name, day, time;
	    void AddReservation()
	    {
		// Get data from user

		    cout << "\nWhat is the reserver name?" << endl;
		    cin >> name;

		    cout << "\nWhat day would you like to reserve?" << endl;
		    cin >> day;


		    cout << "\nWhat time would you like to reserve?" << endl;
		    cin >> time;
	    }
	    void ChangeReservation()
	    {
		//get data from user
		    string name, day, time;
		    cout << "\nWhat name is the reservation under?" << endl;
		    getline(cin, name);

		    cout << "What is the new day you would like to reserve?" << endl;
		    getline(cin, day);

		    cout << "\nWhat is the new time you would like to reserve?" << endl;
		    getline(cin, time);

	    }
	    void checkStatus()
	    {
		    string day, time;
		    bool name;
		    cout << "Enter resevation name." << endl;
		    cin >> name;

		    if (name == true)
		    {
			    cout << "Reservation found for " << name << "\t" << day << "\t" << time << endl;
		    }
		    else
		    {
			    cout << "Reservation for" << name << " not found." << endl;
		    }
        }

	    void reservation()
	    {
		// Declaration of arrays
		    string time[20], names[20], day[20];
		    int choice = 1;


		    while (choice != 0)
		    {
			// User will select a choice
		    	cout << "Welcome to RestaurantReserve System!" << endl;
		    	cout << "1 - Make Reservation" << endl;
		    	cout << "2 - Edit Reservation" << endl;
		    	cout << "3 - Check Status" << endl;
		    	cout << "0 - Exit \n" << endl;

			// User input
		    	cin >> choice;

		    	switch (choice)
		    	{
		        	case 1:
		        		AddReservation();
		        		cout << "Date and Time" << day << time << "has been Reserved." << endl;
		        		break;
		        	case 2:
		        		ChangeReservation();
		        		cout << "Date and Time" << day << time << "has been Reserved." << endl;
		        		break;
			
		        	case 3:
		        		checkStatus();
		        		cout << "Date and Time" << day << time << "has been Reserved." << endl;
		    		break;
		        }
			}
		}
};

//Omar Gonzalez
class Menu
{
	public:
		void menu()
		{

    		int itemName1 = 1, itemName2 = 2, itemName3 = 3, itemName4 = 4, itemName5 = 5; //item menu slots
    		const float itemPrice1 = 5.00, itemPrice2 = 4.50, itemPrice3 = 4.50, itemPrice4 = 5.00, itemPrice5 = 5.50; //prices for each item
    		bool availability1 = 1, availability2 = 1, availability3 = 1, availability4 = 1, availability5 = 1; //if availability is 1, then it is available. 
  
    		cout << setw(25) << "***** Menu *****\n"
        		<< itemName1 << " Pho " << setw(17) << "$" << itemPrice1 << setw(5) << availability1 << endl
        		<< itemName2 << " Chalupa " << setw(13) << "$" << itemPrice2 << setw(5) << availability2 << endl
        		<< itemName3 << " Croissant " << setw(11) << "$" << itemPrice3 << setw(5) << availability3 << endl
        		<< itemName4 << " Krabby Patty " << setw(8) << "$" << itemPrice4 << setw(5) << availability4 << endl
        		<< itemName5 << " Monkey D. Luffy " << setw(5) << "$" << itemPrice5 << setw(5) << availability5 << endl;
		}
};

//Omar Gonzalez
class CateringMgmt
{
	public:
		//allows editing for catering item
		void editCateringItem()
		{
			string itemName;
			cout << "Select what food you would like to add for catering from the menu: \n";
			cin >> itemName;
		}
		//removes catering item
		void removeCateringItem()
		{
			string itemName; 
			cout << "Select what food you will like to remove from catering: \n";
			cin >> itemName; 
		}
		//edits the quantity of catering item
		void editQuantity()
		{
			string itemName;
			int addQuantity;
			cout << "Which item would you like to modify its quantity?  \n";
			cin >> itemName;
			cout << "Enter quantity for selected item: \n";
			cin >> addQuantity; 
		}
		//gives time of when the edit was made
		void checkCateringHistory()
		{
			auto givemetime = chrono::system_clock::to_time_t (chrono::system_clock::now()); 
			cout << ctime(&givemetime); 
		}

};

class Catering
{
	public:
    	void cateringOrder()
    	{
	    	string eventName, cusName;	
	    	double guestNum;	
	    	int numMinutes;	// this is the number of minutes in the event

	      //input
	    	cout << "Enter the name of the event " << endl;
	    	getline(cin, eventName);
	    	cout << "Enter the customer's first and last name " << endl;
	    	getline(cin, cusName);
	    	cout << "Enter the number of guests " << endl;
	    	cin >> guestNum;
	    	cout << "Enter the number of minutes in the event " << endl;
	    	cin >> numMinutes;
	    	system("CLS");		//system clears the screen of the inputs

	    	cout << eventName << endl;
	    	cout << "Event estimate for  " << cusName << endl;

	    	int numServers, Cost1;
	    	double CostForOneServer, Test, TotalFoodCost, AverageCost, Cost2, DepositAmount, TotalCost;

	    	const double CostPerHour = 20.55;
	    	const double CostPerMinute = .34;
	    	const double CostOfDinner = 30.00;

	      // Get Number Of Servers
	    	Test = guestNum / 25;
	    	numServers = ceil(Test);

	      // Get Cost Of One Server
	    	Cost1 = (numMinutes / static_cast<double>(60)) * CostPerHour;
	    	Cost2 = (numMinutes % 60) * CostPerMinute;
	    	CostForOneServer = Cost1 + Cost2;

	       // Get Cost For Food
	    	TotalFoodCost = guestNum * CostOfDinner;

	      // Get Average Cost Per Person
	    	AverageCost = TotalFoodCost / guestNum;

	      // Get Total Cost
	    	TotalCost = TotalFoodCost + (CostForOneServer * numServers);

	      // Get Deposit Amount (30%)
	    	DepositAmount = TotalCost * .30;

	      // Print values 
	    	cout << "Number Of Server: " << numServers << fixed << setprecision(2) << endl;
	    	cout << "The Cost for Servers: " << setw(5) << CostForOneServer << endl;
	    	cout << "The Cost for Food is: " << setw(5) << TotalFoodCost << endl;
	    	cout << "Avergae Cost Per Person: " << setw(5) << AverageCost << endl;
	    	cout << "\nTotal cost is: " << setw(5) << TotalCost << endl;

	    	cout << "Please deposite a 30% deposit to reserve the event" << endl;
	    	cout << "The deposit needed is: " << setw(5) << DepositAmount << endl;

    	}
};

class Cart
{
	//The cart() is where the user inputs what they would like
	//from the menu and it will total out the food.
	public:

	void cart()
	{
		string itemName;
		int quantity;
		string orderConfirmation;
		double itemPrice;

		int choice = 1;
		
		while(choice != 0)
		{
			cout << "---------" << endl;
			cout << "\tCart\t \n" << endl;
			cout << "1 - Item Name\n" << endl;
			cout << "2 - Quantity\n" << endl;
			cout << "3 - Total \t" << endl;
			cout << "4 - Order # \t" << endl;
			
			// user input
			cin >> choice;
			
			switch (choice)
			{
			case 1:
				menu();
				cout << "Item Name " << itemName << " added to cart" << endl;
				break;
			case 2:
				menu();
				cout << "Quantity " << quantity << endl;
				break;
			case 3:
				menu();
				cout << "Total: $" << itemPrice << endl;
				break;
			case 4: 
				menu();
				cout << "Order Confirmation #: " << orderConfirmation << endl;
				break;
			}
		}
		system("PAUSE");

	    }
};
