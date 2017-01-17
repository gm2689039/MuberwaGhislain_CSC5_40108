/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 10:57 PM
  Purpose:  Ask the user to enter an amount for penny, nickel, dime, and quarter 
 *          that can make up a dollar
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
    int penny;          //Hold input for pennies from user
    int nickel;         //Hold input for nickel from user
    int dime;           //Hold input for dime from user
    int quarter;        //Hold input for quarter from user
    double total;       //Hold total from user
    cout << setprecision(2) << showpoint << fixed;
    
    //Input values
    cout << "Welcome to the Dollar game where the purpose is to add the coins to $1:\n";
    cout << "Please enter the amount of coins for:\n";
    cout << "Penny: ";
    cin >> penny;
    cout << "Nickel: ";
    cin >> nickel;
    cout << "Dime: ";
    cin >> dime;
    cout << "Quarter: ";
    cin >> quarter;
    
    //Calculate total from input
    total = (penny * .01) + (nickel * .05) + (dime * .10) + (quarter * .25);
    
    //Output values
    if(total > 1.00)
        cout << "The total amount is more than $1.00";
    else if(total < 1.00)
        cout << "The total amount is less than $1.00";
    else
        cout << "Congratulation, the total amount of coins equals $1.00. You have Won the game.";
    
    //Exit stage right!
    return 0;
}