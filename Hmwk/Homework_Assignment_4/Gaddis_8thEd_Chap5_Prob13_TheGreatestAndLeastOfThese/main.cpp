/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 20, 2017, 2:01 AM
  Purpose:  Have user enter integers and find the greatest and least of them
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
    int greatest = 0;           //Hold the largest number entered
    int least = 0;              //Hold the smallest number entered
    int num;                //Hold user input
    
    //Input values
    while(num != 99){
        cout << "Please enter a number (enter -99 to quit): ";
        cin >> num;
        
        //Make sure -99 is not included in checking values
        if(num == -99) break;
        
        //Find if number is the largest 
        if(num > greatest)
            greatest = num;
        //Check if number is the smallest
        if(num < least)
            least = num;
    }
    
    //Output values
    cout << "The largest number is " << greatest << endl;
    cout << "The smallest number is " << least << endl;
    
    //Exit stage right!
    return 0;
}