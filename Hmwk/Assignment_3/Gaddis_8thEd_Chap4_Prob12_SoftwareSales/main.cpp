/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 16, 2017, 11:41 PM
  Purpose:  Calculate the discount for a quantity of software
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
    //Declare Variables
    int order;              //Hold number of order
    double discount;        //Hold discount amount
    double cut;             //Hold amount to remove
    double price = 99.00;    //price for each product
    double total;           //Hold final price
    cout << setprecision(2) << showpoint << fixed;
    
    //Input values
    cout << "How many units to purchase: ";
    cin >> order;
    
    //Calculate discount
    if((order >= 10) || (order <= 19)){
        discount = .2;
    }
    else if((order >= 20) || (order <= 49)){
        discount = .3;
    }
    else if((order >= 50) || (order <= 99)){
        discount = .4;
    }
    else if(order >= 100){
        discount = .5; 
    }
    
    //Calculate total
    total = (order * price) - ((order * price)*discount);
    
    //Output values
    if(order < 10){
        cout << "quantity has to be greater than or equal to 10";
    }
    else{
        cout << "Total cost of purchase is $" << total;
    }
    //Exit stage right!
    return 0;
}