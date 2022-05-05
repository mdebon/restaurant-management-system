#include<iostream>
#include<string>
#include<fstream>
#include "Classes.cpp"


using namespace std;

class Account ;
class Login;
void intro();
class menuUpdateReport;
class reservationReport;
class SignUp ;
class Cart ;
class ReservationManagementClass ;
class Menu;
class Catering;
class cateringMgmt;



int main() {
	int choice;
	cout << "\t\t\t _____________________________________\n\n\n";
	cout << "\t\t\t   WELCOME TO THE WORLD'S RESTAURANT  \n\n\n";
	cout << "\t\t\t             MAIN MENU                \n\n\n";
	cout << "                                                   ";
	cout << "\t PRESS 1 TO LOGIN" << endl;
	cout << "\t PRESS 2 TO SIGN UP " << endl;
	cout << "\t PRESS 3 TO SEE THE MENU" << endl;
	cout << "\t PRESS 4 TO ORDER CATERING" << endl;
	cout << "\t PRESS 5 TO MAKE A RESERVATION" << endl;
	cout << "\t PRESS 6 TO MAKE AN UPDATE IN MENU" << endl;
	cout << "\t PRESS 7 TO MAKE AN UPDATE IN CATERING  " << endl;
	cout << "\t PRESS 7 TO MAKE AN UPDATE IN RESERVATION  " << endl;
	cout << "\t PRESS 8 TO MAKE AN UPDATE IN CATERING  " << endl;
	cout << "\t PRESS 9 TO SEE YOUR CART " << endl;
	cout << "\t PRESS 10 TO EXIT" << endl;
	 
	cout << "\t PLEASE ENTER YOUR CHOICE:    " << endl;
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1: 
		Login;
		break;
	case 2:
		SignUp;
		break;
	case 3:
		Menu;
		break;
	case 4:
		Catering;
		break;
	case 5: 
		ReservationManagementClass;
		break;
	case 6:
		menuUpdateReport;
		break;
	case 7:
		reservationReport;
		break;
	case 8:
		cateringMgmt;
		break;
	case 9:
		Cart;
		break;
	case 10: 
		cout << "\t\t\t THANK YOU !! \n\n\n";
		break;
	default:
		system("cls");
		cout << "\t\t\t Please select the options above \n\n\n" << endl;
		main();


	}

	 intro();
		return 0;
		system("pause");

}
