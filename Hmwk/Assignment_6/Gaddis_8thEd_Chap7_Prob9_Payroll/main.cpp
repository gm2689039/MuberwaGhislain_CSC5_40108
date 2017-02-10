/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on February 5, 2017, 7:26 PM
  Purpose:  Calculate the wage of employees
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
    //Declare arrays with employee's information
    const int NUMBER_OF_EMPLOYEE = 7;
    cout << setprecision(2) << fixed << showpoint;
    
    //List of seven employee ID
    long int empId[NUMBER_OF_EMPLOYEE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[NUMBER_OF_EMPLOYEE];              //Hold how many hours the employee worked
    double payRate[NUMBER_OF_EMPLOYEE];         //Hold each employee's hourly pay rate
    double wages[NUMBER_OF_EMPLOYEE];           //Holds each employee's gross wages
    
    //Input values
    cout << "Collect each employee's hours they worked and hourly pay rate:" << endl;
    for(int i = 0; i < NUMBER_OF_EMPLOYEE; i++){
        cout << "Employee ID " << empId[i] << endl;         //Display employee ID
        cout << "Hours worked: ";                                   //Ask for hours worked
        cin >> hours[i];
        
        //Check if hours input is valid
        while(hours[i] < 0){
            cout << "Hours cannot be a negative number: ";
            cin >> hours[i];
        }
        
        cout << "Hourly pay rate: $";                               //Ask for hourly pay rate
        cin >> payRate[i];
        
        //Check if pay rate is valid
        while(payRate[i] < 15.00){
            cout << "Pay rate cannot be less than $15.00: $";
            cin >> payRate[i];
        }
        
        //Calculate employee's wage
        wages[i] = hours[i] * payRate[i];
    }
    
    //Display each employee's wages
    cout << "List of Employee's wages" << endl;
    for(int i = 0; i < NUMBER_OF_EMPLOYEE; i++){
        cout << "ID# " << empId[i] << "\t\t$" << wages[i] << endl;
    }
    
    //Output values

    //Exit stage right!
    return 0;
}