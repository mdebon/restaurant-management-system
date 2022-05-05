#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include "MenuandMenuUpdating.cpp"  

using namespace std;

class cateringMgmt
{
	public:
		void editCateringItem()
		{
			string itemName;
			cout << "Select what food you would like to add for catering from the menu: \n";
			cin >> itemName;
		}
		void removeCateringItem()
		{
			string itemName; 
			cout << "Select what food you will like to remove from catering: \n";
			cin >> itemName; 
		}
		void editQuantity()
		{
			string itemName;
			int addQuantity;
			cout << "Which item would you like to modify its quantity?  \n";
			cin >> itemName;
			cout << "Enter quantity for selected item: \n";
			cin >> addQuantity; 
		}
		void checkCateringHistory()
		{
			auto givemetime = chrono::system_clock::to_time_t (chrono::system_clock::now()); 
			cout << ctime(&givemetime); 
		}

};
