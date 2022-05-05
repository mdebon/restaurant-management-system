#include <iostream>
#include <fstream>
#include "reservation mngnt.cpp"

using namespace std;

//function to show Account details
class reservationReport {


    string name;
    bool reservationStatus;
    string reservationTime;
    string reservationDate;



    cout << "-------------------------------------------------------------------------" << endl;

    cout << "NAME OF RESERVER : " << name << endl;
    cout << "DATE OF RESERVATION    : " << reservationDate << endl;
    cout << "TIME OF RESERVATION  : " << reservationTime << endl;
    cout << "reservationStatus  :" << reservationStatus << endl;
    
    cout << "-------------------------------------------------------------------------" << endl;

    system("pause");

};
