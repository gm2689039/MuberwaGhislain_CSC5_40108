/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 15, 2017, 1:48 PM
  Purpose:  User enter two numbers and tell which is larger and which is smaller
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
    int numOne, numTwo; //Holds the input of the user
    
    //Input values
    cout << "Please enter two integers: ";
    cin >> numOne >> numTwo;
    
    //Output values
    if(numOne > numTwo)
        cout << numOne << " is the larger integer while " << numTwo << " is smaller";
    else
        cout << numTwo << " is the larger integer while " << numOne << " is smaller";
    
    //Exit stage right!
    return 0;
}