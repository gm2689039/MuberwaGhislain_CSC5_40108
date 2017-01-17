/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 7:44 PM
  Purpose:  Multiply the day and month on a date to see if it equals the year 
 */

//System Libraries
#include <iostream>
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
    int day;        //Hold day from a date
    int month;      //Hold month, number form, from a date
    int year;       //Hold year, in two digit form, from a date
    
    //Input values
    cout << "Please enter a date(mm dd yy): ";
    cin >> month >> day >> year;
    
    //Process by mapping inputs to outputs
    if((day * month) == year)
        cout << "The date " << month << "/" << day << "/" << year << " is a magic date.\n";
    else
        cout << "The date " << month << "/" << day << "/" << year << " is not a magic date.\n";

    //Exit stage right!
    return 0;
}