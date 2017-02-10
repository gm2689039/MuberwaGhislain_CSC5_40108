/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on February 4, 2017, 11:36 AM
  Purpose:  Find larget and smallest number in array
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int ARRAY_SIZE = 10;
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int numArray[ARRAY_SIZE];               //Hold the input from user
    int largestNum;                         //Hold largest number in array
    int smallestNum;                        //Hold smallest number in array
    
    //Input values
    cout << "Enter ten numbers into array: " << endl;
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout << "Number " << (i + 1) << " : ";
        cin >> numArray[i];
        
        //Search for largest and smallest number in array
        if(i == 0){
            largestNum = numArray[i];
            smallestNum = numArray[i];
        }
        else{
            if(largestNum < numArray[i])
                largestNum = numArray[i];
            
            if(smallestNum >  numArray[i])
                smallestNum = numArray[i];
        }
    }
    
    //Output largest and smallest number in array
    cout << "The largest number in array is " << largestNum << endl;
    cout << "The smallest number in array is " << smallestNum << endl;
    
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}