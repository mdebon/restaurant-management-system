#include <iostream>
#include <string>
#include <fstream>



using namespace std;

int main()
{   
    //define array of strings
    string itemName[11] = { "1", "2", "3","4", "5", "6","7", "8","9", "10" };
    //get array size
    int arraySize = *(&itemName + 1) - itemName;
    //exception handling
    try { 
        //file is opened to update menu 
        ofstream file("menuUpdateMgmt.txt", std::ofstream::out);
  
        if (file.is_open())
        {
            //will store contents into file from array 
            for (int i = 1; i < arraySize; i++)
            {
                file << itemName[i] << "\n";
            }
            file.close(); 
        }
        else cout << "Error with file! Please try again";
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }

    std::ifstream file("menuUpdateMgmt.txt");

    if (file.is_open()) //Opens file to edit
        cout << "\n\t ** Menu ** \t";
        cout << "\n";
        std::cout << file.rdbuf(); 



        
}
