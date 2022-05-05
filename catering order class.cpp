#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
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

	return 0;
}