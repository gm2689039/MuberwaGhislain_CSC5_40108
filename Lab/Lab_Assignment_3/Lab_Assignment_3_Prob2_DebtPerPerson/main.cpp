/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 12, 2017, 11:58 PM
  Purpose:  Calculate the debt for each person in the United State
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
    //Set decimal answers to two decimal places
    cout << setprecision(2) << showpoint << fixed;
    
    //Declare Variables
    int population2008 = 304000000,             //US population in 2008: 304 Million
            population2016 = 322000000;         //US population in 2016: 322 Million
    
    double federalDebt2008 = 9700000000000,     //2008 federal debt of 9.7 Trillion
            federalDebt2016 = 20000000000000,    //2016 federal debt of 20 Trillion
            personalDebt2008, personalDebt2016; //individual debt 
    
    //Calculate individual debt 
    personalDebt2008 = federalDebt2008/population2008;
    personalDebt2016 = federalDebt2016/population2016;
    
    //Output values
    cout << "In 2008 the US population was " << population2008 
            << " and the federal debt was $" << federalDebt2008 
            << ", each person has a debt of $" << personalDebt2008 << endl;
        cout << "In 2016 the US population was " << population2016 
            << " and the federal debt was $" << federalDebt2016 
            << ", each person has a debt of $" << personalDebt2016 << endl;
    //Exit stage right!
    return 0;
}