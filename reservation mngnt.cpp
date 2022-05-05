#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Prototypes

class ReservationManagementClass
{
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

	int main()
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


		system("PAUSE");
		return 0;
	}
};