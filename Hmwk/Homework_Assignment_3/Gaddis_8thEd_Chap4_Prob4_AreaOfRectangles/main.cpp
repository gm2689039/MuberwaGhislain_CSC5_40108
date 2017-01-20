/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 7:56 PM
  Purpose:  Compare the area of two rectangle
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
    int length1, length2, width1, width2;   //Hold measurement of rectangles
    
    //Obtain the length and width of rectangle 1
    cout << "What is the length and width of rectangle One: ";
    cin >> length1 >> width1;
    
    //Obtain the length and width of rectangle 2
    cout << "What is the length and width of rectangle Two: ";
    cin >> length2 >> width2;
    
    //Compare the area of both rectangle
    if((length1 * width1) > (length2 * width2))
        cout << "The area of rectangle One(" << (length1 * width1) 
             << ") is greater than the area of rectangle Two(" << (length2 * width2) <<")\n";
    else if((length1 * width1) < (length2 * width2))
        cout << "The area of rectangle Two(" << (length2 * width2) 
             << ") is greater than the area of rectangle One(" << (length1 * width1) <<")\n";    
    else
        cout << "The area of rectangle One(" << (length1 * width1) 
             << ") is equal to the area of rectangle Two(" << (length2 * width2) <<")\n";
    //Exit stage right!
    return 0;
}