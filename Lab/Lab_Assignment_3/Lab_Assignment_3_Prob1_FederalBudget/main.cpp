/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 12, 2017, 10:03 PM
  Purpose:  Calculate the percentage of Military and NASA in the federal budget
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
    cout << setprecision(2) << showpoint << fixed;
    
    //Declare Variables
    double militaryBudget = 580000000000,       //Military budget of 580 Billion
            militaryPercent,                    //Percentage out of US spending
            nasaBudget = 18500000000,           //NASA budget of 18.5 Billion
            nasaPercent,                        //Percentage out of US spending
            usSpending = 3540000000000;         //total amount of US dollar used in 2016
    
    //Calculate percentages
    militaryPercent = (militaryBudget/usSpending) * 100; 
    nasaPercent = (nasaBudget/usSpending) * 100;
    
    //Output values
    cout << "Referring to 2016 with a US Spending of $" << usSpending << ":\n";
    cout << "Military had a budget of $" << militaryBudget << " which is "
            << militaryPercent << "% of US spending.\n";
    cout << "NASA had a budget of $" << nasaBudget << " which is " << nasaPercent
            << "% of US spending.";
    
    //Exit stage right!
    return 0;
}