/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 8, 2017, 1:08PM:
  Purpose:  Calculate the annual pay of an employee
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
    double payAmount = 2200.00, //Employee's payment at each pay period
           payPeriods = 26,     //The amount of weeks in a year the employee is paid
           annualPay;           //The amount the employee is paid in a year
    
    //Calculate annual payment of employee
    annualPay = payAmount * payPeriods;
    
    //Output values
    cout << "An employee getting paid every two weeks and earns $" << payAmount
         << " every pay period makes $" << annualPay << " in a year.";
    //Exit stage right!
    return 0;
}