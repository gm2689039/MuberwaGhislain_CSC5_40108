/* 
  File:   main.cpp
  Author: Ghislain Muberwa
  Created on January 11, 2017, 8:59 PM
  Purpose:  Calculate the profit and distribution cost of a movie theater
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
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
    cout << setprecision(2) << showpoint << fixed;
    string movie; //Name of the movie
    int adultTicketSold, childTicketSold;        //amount of adult and child ticket purchased 
    double adultTicket = 10.00, childTicket = 6.00, //price for tickets 
            grossProfit,                            //overall amount of money the movie theater made 
            netProfit,                              //amount of money the movie theater made
            netProfitPercent = .2,                  //percentage of what the theater keeps from gross profit
            distributorProfit;                      //amount of money the movie theater gives to distributor
    
    //Input values
    cout << "What movie will you be watching today: ";
    getline(cin, movie);
    cout << "How many adult ticket are you purchasing: ";
    cin >> adultTicketSold;
    cout << "How many child ticket are you purchasing: ";
    cin >> childTicketSold;
    
    //Calculate profits
    grossProfit = (adultTicket * adultTicketSold) + (childTicket * childTicketSold);
    netProfit = grossProfit * netProfitPercent;
    distributorProfit = grossProfit - netProfit;
    
    //Output values
    //All lines begin as close as as possible to the distributor line
    cout << "Movie name:" << setw(25) << "\"" << movie << "\"" << endl;
    cout << "Adult Ticket Sold:" << setw(20) << adultTicketSold << endl;
    cout << "Child Ticket Sold:" << setw(20) << childTicketSold << endl;
    cout << "Gross Box Office Profit:" << setw(13) << "$" << grossProfit << endl;
    cout << "Net Box Office Profit:" << setw(15) << "$" << netProfit << endl;
    cout << "Amount Paid to Distributor:" << setw(10) << "$" << distributorProfit << endl; //default where information start
    //Exit stage right!
    return 0;
}