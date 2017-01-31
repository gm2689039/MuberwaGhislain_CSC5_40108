/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 7, 2017, 7:48 PM
  Purpose:  Assign two integers, add them, and display answer
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
    //Declare Variables
    int firstNumber, secondNumber, total;

    firstNumber = 50;
    secondNumber = 100;
    
    //Calculate variable for output
    total = firstNumber + secondNumber;
    
    //Output values
    cout << firstNumber << " + "  << secondNumber << " = " << total;
    
    //Exit stage right!
    return 0;
}