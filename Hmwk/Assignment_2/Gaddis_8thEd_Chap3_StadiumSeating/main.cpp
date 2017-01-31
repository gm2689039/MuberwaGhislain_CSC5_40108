/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 11, 2017, 6:41 PM
  Purpose:  Calculate the cost of three seating categories at a stadium 
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
    double classASeat, classBSeat, classCSeat, // hold how many seats are purchased
            classACost = 15, classBCost = 12, classCCost = 9, // how much each category cost
            classACharge, classBCharge, classCCharge, total; // holds total for purchases
    cout << setprecision(2) << showpoint << fixed;
    
    //Process by mapping inputs to outputs
    cout << "How many class A seats, at $" << classACost << " do you want to purchase? ";
    cin >> classASeat;
    cout << "How many class B seats, at $" << classBCost << " do you want to purchase? ";
    cin >> classBSeat; 
    cout << "How many class C seats, at $" << classCCost << " do you want to purchase? ";
    cin >> classCSeat;
    
    //Calculate the totals
    classACharge = classASeat * classACost;
    classBCharge = classBSeat * classBCost;
    classCCharge = classCSeat * classCCost;
    total = classACharge + classBCharge + classCCharge;
    
    //Output values
    cout << "There are " << (int)classASeat << " purchases at the cost of $" << classACharge << endl;
    cout << "There are " << (int)classBSeat << " purchases at the cost of $" << classBCharge << endl;
    cout << "There are " << (int)classCSeat << " purchases at the cost of $" << classCCharge << endl;
    cout << "Total cost for all purchases are $" << total;
    
    //Exit stage right!
    return 0;
}