/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 8, 2017, 7:45 PM
  Purpose:  Calculate the Miles Per Gallon (MPG) of a vehicle based on given
 *          information.
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
    //set answers to two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Declare Variables
    double miles = 375, gallons = 15, mpg;
    
    //calculate mpg
    mpg = miles/gallons;
    
    //Output values
    cout << "A vehicle that holds " << gallons << " gallons and traveled "
            << miles << " miles has " << mpg << " Miles per Gallon capacity to drive on.";
    //Exit stage right!
    return 0;
}