/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 3, 2017, 8;29 PM
  Purpose:  Display the character for the ASCII Code 0 to 126
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare variables
    int row = 0;            //used to display 16 character on each line
    //Message with the purpose
    cout << "This is the list of characters with their ASCII code\n";
    
    //Display list
    for(int i = 0; i <= 127; i++){
        cout << i << ". " << (char)i << "\t";
        row++;
        if((row%16) == 0)
            cout << "\n";
    }

    //Exit stage right!
    return 0;
}