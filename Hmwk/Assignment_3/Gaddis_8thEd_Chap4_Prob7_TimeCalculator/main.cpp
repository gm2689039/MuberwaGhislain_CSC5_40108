/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 8:39 PM;
  Purpose:  Calculate the amount of minutes or hours or days from the seconds given
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
    int seconds;        //Holds the amount of seconds from the user
    int minutes;        //Holds the amount of minutes from given seconds
    int hours;          //Holds the amount of hours form given seconds
    int days;           //Holds the amount of days from given seconds
    int temp;           //Holds the remainder for some of the calculation
    
    //Input values
    cout << "How many seconds to Calculate: ";
    cin >> seconds;
    
    //Process the seconds
    if(seconds >= 86400){
        days = seconds / 86400;
        temp = seconds % 86400;
        hours = temp / 3600;
        temp = temp % 3600;
        minutes = temp / 60;
        seconds = temp % 60;
        cout << "There are " << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds.\n";           
    }
    else if((seconds < 86400) && (seconds > 3600)){
        hours = seconds / 3600;
        temp = seconds % 3600;
        minutes = temp / 60;
        seconds = temp % 60;
        cout << "There are " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds.\n";        
    }
    else if((seconds < 3600) && (seconds >= 60)){
        minutes = seconds / 60;
        seconds = seconds % 60;
        cout << "There are " << minutes << " minutes and " << seconds << " seconds.\n";
    }
    else{
        cout << "There are " << seconds << " seconds.\n";
    }
    
    //Output values

    //Exit stage right!
    return 0;
}