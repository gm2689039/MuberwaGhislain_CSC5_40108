/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 5:16 PM
  Purpose:  Convert Arabic numbers to Roman numerals
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
    int num;      //Hold user input also known as Arabic Numerals
    
    //Input values
    cout << "Please enter a number between 1 and 10 to convert to Roman Numeral: ";
    cin >> num;
    
    //Process by mapping inputs to outputs
    switch(num) {
        case 1: cout << "The Roman Number of 1 is I";
                  break;
        case 2: cout << "The Roman Number of 2 is II";
                  break;
        case 3: cout << "The Roman Number of 3 is III";
                  break;
        case 4: cout << "The Roman Number of 4 is IV";
                  break;
        case 5: cout << "The Roman Number of 5 is V";
                  break;
        case 6: cout << "The Roman Number of 6 is VI";
                  break;                  
        case 7: cout << "The Roman Number of 7 is VII";
                  break;                  
        case 8: cout << "The Roman Number of 8 is VIII";
                  break;     
        case 9: cout << "The Roman Number of 9 is IX";
                  break;      
        case 10: cout << "The Roman Number of 10 is x";
                  break;                  
        default: cout << "Please enter a number between 1 and 10";
    }
    
    //Exit stage right!
    return 0;
}