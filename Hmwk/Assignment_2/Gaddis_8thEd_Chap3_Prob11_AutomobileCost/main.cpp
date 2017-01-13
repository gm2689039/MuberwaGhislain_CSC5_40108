/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 12, 2017, 6:54 PM
  Purpose:  Template to be used in all programming
            projects!
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
    //round to two decimal places
    cout << setprecision(2) << showpoint << fixed;
    
    //Declare Variables
    double loan,                //Payment to payoff the vehicle
            insurance,          //Payment to insurance police
            gas,                //Amount used on gasoline
            oil,                //Amount used on oil change
            tires,              //Amount used on tire purchases
            maintenance,        //Amount used on any mechanical issues
            monthlyTotal,       //Estimated amount used in a month
            annualTotal;        //Estimated amount used in a year
    
    //Input values
    cout << "How much in a month do you spend on: \n";
    cout << "Loan: $";
    cin >> loan;
    cout << "Insurance: $";
    cin >> insurance;
    cout << "Gas: $";
    cin >> gas;
    cout << "Oil: $";
    cin >> oil;
    cout << "Tires: $";
    cin >> tires;
    cout << "Maintenance: $";
    cin >> maintenance;
    
    //Add all expenses together to get monthly cost
    monthlyTotal = loan + insurance + gas + oil + tires + maintenance;
    
    //Multiply monthlyTotal by 12 to acquire yearly cost 
    annualTotal = monthlyTotal * 12; 
    
    //Output values
    cout << "Based on these expenses, the monthly total is estimated to $" << monthlyTotal
            << "\nWhile the annual cost is estimated to be $" << annualTotal << endl;
    //Exit stage right!
    return 0;
}