#include <iostream>
#include <fstream>
#include "MenuandMenuUpdating.cpp"

using namespace std;

//function to show Account details
void menuUpdateReport() {


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

    system("pause");

}