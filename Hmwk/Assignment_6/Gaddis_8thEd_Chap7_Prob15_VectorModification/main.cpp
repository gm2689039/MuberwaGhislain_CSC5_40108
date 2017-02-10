/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on February 6, 2017, 11:49 AM
  Purpose:  Modify program 7-23 in Gaddis textbooks to use vector instead of arrays
 */

//System Libraries
#include <iostream>
#include <vector>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
bool testPIN(vector<int>, vector<int>, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_DIGITS = 7;   //Number of digits in a PIN
    vector<int> pin1 {2, 4, 1, 8, 7, 9, 0};   //Base set of values
    vector<int> pin2 {2, 4, 6, 8, 7, 9, 0};   //Only 1 elements is
                                                    //different from pin1
    vector<int> pin3 {1, 2, 3, 4, 5, 6, 7};   //All elements are
                                                    //different from pin1
    if(testPIN(pin1, pin2, NUM_DIGITS))
        cout << "ERROR: pin1 and pin2 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin2 are different.\n";
    
    if(testPIN(pin1, pin3, NUM_DIGITS))
        cout << "ERROR: pin1 and pin3 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin3 are different.\n";
    
    if(testPIN(pin1, pin1, NUM_DIGITS))
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else
        cout << "ERROR: pin1 and pin1 report to be different.\n";

    //Exit stage right!
    return 0;
}

//******************************
//The following function accepts two vector. The vectors are compared. If they
//Contain the same values, true in returned. If they contain different values,
//false  is returned.
//*****************************

bool testPIN(vector<int> custPIN, vector<int> databasePIN, int size){
    for(int index = 0; index < size; index++){
        if(custPIN[index] != databasePIN[index])
            return false; //We've found two different values
    }
    return true;    //If we make it this far, the values are the same
}