/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 11, 2017, 5:37 PM
  Purpose:  Calculate a vehicle's Miles Per Gallon (MPG) based on user's input
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
    //Declare Variables
    double gallons, miles, mpg;
    
    //Input values
    cout << setprecision(2) << showpoint << fixed;
    cout << "How much gallons of gasoline can the car hold? ";
    cin >> gallons;
    
    cout << "How many miles can the car be driven on a full tank of gasoline? ";
    cin >> miles;
    
    mpg = miles/gallons;
    
    //Output values
    cout << "The car has " << mpg << " mpg";
    
    //Exit stage right!
    return 0;
}