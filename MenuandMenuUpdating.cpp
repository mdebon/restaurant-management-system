#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int order = 1;

    int itemName1 = 1, itemName2 = 2, itemName3 = 3, itemName4 = 4, itemName5 = 5; //item menu slots
    const float itemPrice1 = 6.95, itemPrice2 = 5.75, itemPrice3 = 7.25, itemPrice4 = 8.95, itemPrice5 = 4.95; //prices for each item
    bool availability1 = 1, availability2 = 1, availability3 = 1, availability4 = 1, availability5 = 1; //if availability is 1, then it is available. 
  
    cout << setw(25) << "***** Menu *****\n"
        << itemName1 << " Pho " << setw(17) << "$" << itemPrice1 << setw(5) << availability1 << endl
        << itemName2 << " Chalupa " << setw(13) << "$" << itemPrice2 << setw(5) << availability2 << endl
        << itemName3 << " Croissant " << setw(11) << "$" << itemPrice3 << setw(5) << availability3 << endl
        << itemName4 << " Krabby Patty " << setw(8) << "$" << itemPrice4 << setw(5) << availability4 << endl
        << itemName5 << " Monkey D. Luffy " << setw(5) << "$" << itemPrice5 << setw(5) << availability5 << endl;

    
    system("PAUSE");
    return 0;
}