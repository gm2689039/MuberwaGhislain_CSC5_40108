/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 7, 2017, 8:19 PM
  Purpose:  Predict how much the East Coast Division company will generate based on sales and tax
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
    double totalPercentSale, yearSale, finalTotal;

    //Calculate variables for output
    totalPercentSale = .58;
    yearSale = 8600000;
    finalTotal = yearSale * totalPercentSale;
    
    //Output values
    cout << "The East Coast sales division of a company generated a 58% in total sale.\n"
         << "The company has $8.6 million in sales this year.\n"
         << "The East Coast sales division of the company generated $" << finalTotal;
    
    //Exit stage right!
    return 0;
}