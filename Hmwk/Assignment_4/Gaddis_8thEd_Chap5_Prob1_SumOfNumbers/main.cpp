/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 18, 2017, 8:17 PM
  Purpose:  Add all integers between 1 and the user's input
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
    int lastNum;        //The last number the loop will add
    int sum;            //The sum of all integers from 1 to lastNum
    
    //Input values
    cout << "Please enter a number greater than 0: ";
    cin >> lastNum;
    
    //Check if input is valid
    while(lastNum <= 0){
        cout << "The input is less than or equal to 0, please enter a valid number: ";
        cin >> lastNum;
    }
    
    //Add all numbers from 1 to lastNum
    for(int i = 1; i <= lastNum; i++){
        sum += i;
    }
    
    //Output sum
    cout << "The sum from 1 to " << lastNum << " is " << sum << endl;

    //Exit stage right!
    return 0;
}