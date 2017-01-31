/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 8, 2017, 12:44 PM
  Purpose:  Store five numbers, add them together, and find the average
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set decimal answers to two places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Declare Variables
    double numOne = 28, // List of numbers to add
           numTwo = 32,
           numThree = 37, 
           numFour = 24, 
           numFive = 33,
           sum,         // holds all the added numbers
           average;     // holds the average
   
    //Calculate sum and average
    sum = numOne + numTwo + numThree + numFour + numFive;
    average = sum/5.0;
    
    //output result
    cout << "The average of " << numOne << ", " << numTwo 
         << ", " << numThree << ", " << numFour << ", and " 
         << numFive << " is " << average << endl;

    //Exit stage right!
    return 0;
}