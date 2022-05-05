#include <iostream>
#include <fstream>
#include "AccountClass.cpp"
#include "SignUp.cpp"

using namespace std;

// INTRODUCTION FUNCTION
void intro()
{
    cout << endl;
    cout << "=========================================================================" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "****************  RESTAURANT   M A N A G E M E N T   *****************" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "***************************   S Y S T E M   *****************************" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "PROJECT BUILT BY : " << endl;
    cout << "                        THAI LA                               " << endl;
    cout << "                      MARION DEBON                            " << endl;
    cout << "                        AMY DIXON                              " << endl;
    cout << "                        OMAR GONZALEZ                               " << endl;

    cout << endl;
    cout << "=========================================================================" << endl;
    cin.get();
}

void displayAccount() {
   
    cout << "AccountClass.cpp" << endl;
}
void displaySignUp() {
    cout << "SignUp.cpp" << endl;
}


int main() {
	intro();

	return 0;
}




 


