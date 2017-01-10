/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 8, 2017, 3:57 PM
  Purpose:  create receipt based on list of items and tax
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
    //list of purchases items' price   
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95,
            subtotal,       //variable to store the sum of items
            salesTax = .07, //sales tax to apply to subtotal
            taxAmount,      //Store amount from tax
            total;
    
    //Calculate subtotal and tax amount
    subtotal = item1 + item2 + item3 + item4 + item5;
    taxAmount = subtotal * salesTax;
    total = subtotal + taxAmount;
    
    //Output values
    cout << "Price of item 1 = $" << item1
            << "\nPrice of item 2 = $" << item2
            << "\nPrice of item 3 = $" << item3
            << "\nPrice of item 4 = $" << item4
            << "\nPrice of item 5 = $" << item5
            << "\nSubtotal = $" << subtotal
            << "\nTax amount from " << salesTax * 100 << "% = $" << taxAmount
            << "\nTotal = $" << total << endl;

    //Exit stage right!
    return 0;
}