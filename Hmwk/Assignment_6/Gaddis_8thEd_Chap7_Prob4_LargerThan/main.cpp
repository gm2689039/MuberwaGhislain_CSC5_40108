/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on February 5, 2017, 4:06 PM
  Purpose:  Find integers larger than n in an array
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
void largerThan(int [], int, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int ARRAY_SIZE = 5;                           //Size of array
    int arrayNum[ARRAY_SIZE] = {23, 479, 3, 977, 12};   //Array used to find larger number
    int n;                                              //What number larger than to find
    
    //Input values
    cout << "What integer larger than the input do you want to find: ";
    cin >> n;
    
    //Display integers larger than the input
    largerThan(arrayNum, ARRAY_SIZE, n);

    //Exit stage right!
    return 0;
}

/*Find and display integers larger than n*/
void largerThan(int array[], int arrayLength, int n){
    int count = 0;              //If there are no numbers greater than n(user input)
    cout << "These are the numbers larger than " << n << ": ";
    for(int i = 0; i < arrayLength; i++){
        if(array[i] > n){
            cout << array[i] << " ";
            count++;
        }
    }
    if(count == 0)
        cout << "There are no larger numbers" << endl;
}