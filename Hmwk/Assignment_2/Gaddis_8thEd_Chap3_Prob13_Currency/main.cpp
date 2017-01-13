/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 12, 2017, 7:57 PM
  Purpose:  Convert U.S. Dollar to Japanese Yen and Euros
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
    //Constants to use for currency conversion
    const double YEN_PER_DOLLAR = 115.08;
    const double EUROS_PER_DOLLAR = 0.94;
    
    //Variable to hold input dollar amount and result of conversion
    double usDollar,        //U.S. Dollar
            yenDollar,      //Japanese Yen
            euroDollar;     //Euro 
    
    //using fixed-point notation to make sure values are displayed in two decimal places
    cout << setprecision(2) << showpoint <<  fixed;
    
    //Input values
    cout << "U.S. Dollar amount to convert: $";
    cin >> usDollar;
    
    //Convert US dollar to Japanese Yen and Euro
    yenDollar = YEN_PER_DOLLAR * usDollar;
    euroDollar = EUROS_PER_DOLLAR * usDollar;
    
    //Output values
    cout << "The result of the currency conversion is:\n";
    cout << "Japanese Yen: ¥" << yenDollar << endl;
    cout << "Euro: €" << euroDollar << endl;
    //Exit stage right!
    return 0;
}