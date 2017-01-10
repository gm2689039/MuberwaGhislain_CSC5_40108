/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 3, 2017, 1:32 PM
  Purpose:  Calculate the ocean levels in millimeter based on the year and tell
 *          the difference between each designated years
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
    double oceanLevel = 81.1,    //Current and starting level in millimeter
           risingOceanLevelRate = 1.5,  //rate in millimeter per year the ocean rises
           currentOceanLevel,          //ocean level at certain years
           years,                       //Amount of years to estimate ocean level
           oceanLevelDifference;        //Difference in ocean levels
           
    //Calculate ocean levels, the differences, and display them
    years = 5;
    currentOceanLevel = oceanLevel + (years * risingOceanLevelRate);
    oceanLevelDifference = currentOceanLevel - oceanLevel;
    cout << "With the starting ocean level of " << oceanLevel 
            << "mm, the ocean will rise to " << currentOceanLevel 
            << " after 5 years with a difference of " << oceanLevelDifference << "mm.\n";
    
    //At 7 years
    years = 7;
    oceanLevel = currentOceanLevel;
    currentOceanLevel = oceanLevel + (years * risingOceanLevelRate);
    oceanLevelDifference = currentOceanLevel - oceanLevel;
    cout << "After " << years << " years the ocean level will be " << currentOceanLevel 
            << "mm after rising " << oceanLevelDifference << "mm from the previous indicated year.\n";
    
    //At 10 years
    years = 10;
    oceanLevel = currentOceanLevel;
    currentOceanLevel = oceanLevel + (years * risingOceanLevelRate);
    oceanLevelDifference = currentOceanLevel - oceanLevel;
    cout << "After " << years << " years the ocean level will be " << currentOceanLevel 
            << "mm after rising " << oceanLevelDifference << "mm from the previous indicated year.\n";
    
    //Exit stage right!
    return 0;
}