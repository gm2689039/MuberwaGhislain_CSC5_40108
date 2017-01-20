/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 7, 2017, 9:45 PM
  Purpose:  compute the tax and tip on a restaurant bill
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
    double  mealCost = 88.67,   // amount used for the meal
            tax = .0675,        // tax to apply to
            taxAmount,          // hold the amount for tax in dollar amount
            tip = .2,           // amount to use for tip in percentage
            tipAmount,          // amount to add based on tip
            subTotal,           // amount of mealCharge times tax
            totalBill;          // amount of subTotal and tipAmount
    
    //Calculate amount in dollar about
    taxAmount = mealCost * tax;
    subTotal = mealCost + taxAmount;
    tipAmount = subTotal * tip;
    totalBill = mealCost + taxAmount + tipAmount; // add all three parts
    
    //Output values
    cout << "Meal cost: $" << mealCost << endl;
    cout << "Tax amount: $" << taxAmount << endl;
    cout << "Tip amount: $" << tipAmount << endl;
    cout << "Total bill: $" << totalBill << endl;
    
    //Exit stage right!
    return 0;
}