/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 11:16 PM
  Purpose:  Tell how many days are in a given month 
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
    int days;       //The resulting amount of days in a month
    int month;      //Hold input from user
    int year;       //Hold input from user
    bool leap = false;       //Confirm a leap year
    
    //Input values
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    
    //Find if year lands in leap year
    if(!(year/100)){
        if(!(year/400)){
            leap = true;
        }
    }
    else{
        if(!(year/4)){
             leap = true;
        }
    }
    if(leap){
        cout << "29 days";
    }
    else{
        if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 9) || (month == 11))
            cout << "31 days";
        else if((month == 4) || (month == 6) || (month == 8) || (month == 10) || (month == 12))
            cout << "30 days";  
        else if(month == 2)
            cout << "28 days";
    }    
    
    //Output values

    //Exit stage right!
    return 0;
}