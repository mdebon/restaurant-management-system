#include<iostream>
#include<string>
#include<fstream>
#include "menuUpdateMgmt.txt"

using namespace std;

class Cart
{
public:
	//The cart() is where the user inputs what they would like
	//from the menu and it will total out the food.
	void cart()
	{
		string itemName;
		int quantity;
		string orderConfirmation;

		cout << "---------" << endl;
		cout << "\tCart\t \n" << endl;
		cout << "Item Name\n" << itemName << endl;
		cout << "Quantity\n" << quantity << endl;
		cout << "Order # \t" << orderConfirmation << endl;

		system("PAUSE");

	}
};