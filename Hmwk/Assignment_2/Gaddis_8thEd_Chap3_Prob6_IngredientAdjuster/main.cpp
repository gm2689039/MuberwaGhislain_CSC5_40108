/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 11, 2017, 8:21 PM
  Purpose:  Adjust the recipe for cookies
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
    cout << setprecision(2) << showpoint << fixed;
    //Original recipe and yield
    double sugar = 1.5; //Original amount for sugar
    double butter = 1;  //Original amount for butter
    double flour = 2.75; //Original amount for flour
    double originalYield = 48; //Original amount of cookies for the recipe
    
    double desiredYield; //Amount of cookies the user wants
    double rfc; //(Recipe Conversion Factor) ratio used to calculate new amount for ingredients
    //Input values
    cout << "A cookie recipe that uses:\n" 
            << sugar << " cups of sugar\n"
            << butter << " cup of butter\n"
            << flour << " cups of flour\n"
            << "Makes " << (int)originalYield << " cookies\n\n";
    cout << "Based on this recipe how many cookies would you like to make: ";
    cin >> desiredYield;
    cout << "\n";
    //Calculate new amounts for recipe
    rfc = desiredYield/originalYield;
    sugar *= rfc;
    butter *= rfc;
    flour *= rfc;
    
    //Output values
    cout << "Based on " << (int)desiredYield << " cookies, the new recipe is adjusted to:\n"
            << sugar << " cups of sugar\n"
            << butter << " cup of butter\n"
            << flour << " cups of flour\n"; 
    
    //Exit stage right!
    return 0;
}