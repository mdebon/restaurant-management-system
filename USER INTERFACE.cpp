// Marion Debon, Thai La
// This source file is the user interface of the program. It displays the options for the user and uses
// the classes of the program.

#include<iostream>
#include<string>
#include<fstream>
#include "Classes.cpp"

using namespace std;

// This method displays the user interface for a logged in customer.
void customerInterface()
{
	int choice1;
	cout << "\t\t\t _____________________________________\n\n\n";
	cout << "\t\t\t   WELCOME TO THE WORLD'S RESTAURANT  \n\n\n";
	cout << "\t\t\t             CUSTOMER MENU            \n\n\n";
	cout << "                                                   ";
	cout << "\t PRESS 1 TO MAKE A RESERVATION" << endl;
	cout << "\t PRESS 2 TO MAKE A CATERING ORDER" << endl;
    	cout << "\t PRESS 3 TO VIEW CART" << endl;
	cout << "\t PRESS 4 TO LOG OUT" << endl;
	 
	cout << "\t PLEASE ENTER YOUR CHOICE: " << endl;
	cin >> choice1;
	cout << endl;

    switch(choice1)
    {
        case 1:
		{
			ReservationManagement r1;
            		r1.AddReservation();
		}
        case 2:
		{
			Catering c1;
			c1.cateringOrder();
		}
        case 3:
		{
			Cart cart1;
			cart1.cart();
		}
	case 4:
		{
			cout << "\t\t\t LOGGED OUT. \n\n\n";
			break;
			    
            
    }
}

// This method displays the user interface for a logged in employer.
void employeeInterface()
{
	int choice2;
	cout << "\t\t\t _____________________________________\n\n\n";
	cout << "\t\t\t   WELCOME TO THE WORLD'S RESTAURANT  \n\n\n";
	cout << "\t\t\t             EMPLOYEE MENU            \n\n\n";
	cout << "                                                   ";
	cout << "\t PRESS 1 TO UPDATE RESERVATION" << endl;
	cout << "\t PRESS 2 TO LOG OUT" << endl;
	 
	cout << "\t PLEASE ENTER YOUR CHOICE: " << endl;
	cin >> choice2;
	cout << endl;

	switch(choice2)
	{
		case 1:
		{
			ReservationManagement edit;
			edit.ChangeReservation();
		}
		case 2:
		{
			cout << "\t\t\t LOGGED OUT. \n\n\n";
			break;
		}
	}
}

// This method displays the user interface for a logged in manager.
void managerInterface()
{
	int choice3;
	cout << "\t\t\t _____________________________________\n\n\n";
	cout << "\t\t\t   WELCOME TO THE WORLD'S RESTAURANT  \n\n\n";
	cout << "\t\t\t             MANAGER MENU            \n\n\n";
	cout << "                                                   ";
	cout << "\t PRESS 1 TO EDIT A CATERING ORDER" << endl;
	cout << "\t PRESS 2 TO REMOVE A CATERING ORDER" << endl;
	cout << "\t PRESS 3 TO EDIT MENU" << endl;
	cout << "\t PRESS 4 TO LOG OUT" << endl;
	 
	cout << "\t PLEASE ENTER YOUR CHOICE: " << endl;
	cin >> choice3;
	cout << endl;

	switch(choice3)
	{
		case 1:
		{
			CateringMgmt edit;
			edit.editCateringItem();
		}
		case 2:
		{
			CateringMgmt del;
			del.removeCateringItem();
		}
		case 3:
		{
			// menu update
		}
		case 4:
		{
			cout << "\t\t\t LOGGED OUT. \n\n\n";
			break;
		}
	}
}

int main() {
	
	int choice;
	cout << "\t\t\t _____________________________________\n\n\n";
	cout << "\t\t\t   WELCOME TO THE WORLD'S RESTAURANT  \n\n\n";
	cout << "\t\t\t             MAIN MENU                \n\n\n";
	cout << "                                                   ";
	cout << "\t PRESS 1 TO LOGIN" << endl;
	cout << "\t PRESS 2 TO SIGN UP " << endl;
	cout << "\t PRESS 3 TO SEE THE MENU" << endl;
	cout << "\t PRESS 4 TO EXIT" << endl;
	 
	cout << "\t PLEASE ENTER YOUR CHOICE: " << endl;
	cin >> choice;
	cout << endl;

	switch(choice)
	{
		case 1:
		{
			//Allows user to login. If the login process succeeds, the system displays
			//a different interface depending on the permission level on the account.
			string permissionLevel;
			Login l1;
			permissionLevel = l1.login();
		
			if (permissionLevel == "1")
			{
				cout << "You are logged in." << endl;
				customerInterface();
			}
			else if (permissionLevel == "2")
			{
				cout << "You are logged in." << endl;
				employeeInterface();
			}
			else if (permissionLevel == "3")
			{
				cout << "You are logged in." << endl;
				managerInterface();
			}
			else
				cout << "Invalid email or password." << endl;
		}
		case 2:
		{
			SignUp s1;
			s1.signUp();
		}
		case 3:
		{
			Menu m;
			m.menu();
		}
		case 4: 
		{
			cout << "\t\t\t THANK YOU !! \n\n\n";
			break;
		}
		default:
		{
			system("cls");
			cout << "\t\t\t Please select the options above \n\n\n" << endl;
			main();
		}


	}
	return 0;
	system("pause");

}
