// Henderson, Wilson, Webber, Dr_T, 9-11-19.
// This program is an invoice for seven companies that owe us money.
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include<cmath>
#include<iomanip>
using namespace std;

double invoiceCalculator(double,double,string,int);

int main()
{
  double hourlyRate = 95.00;
  
  cout << fixed << setprecision(2);
  
  cout << hourlyRate << endl;
  cout << invoiceCalculator(hourlyRate, 35.50, "\x1b[32;1mWeb,LLC\x1b[0m\n", 1) << endl;
  cout << invoiceCalculator(hourlyRate, 20.00, "\x1b[32;1mAmberway\x1b[0m\n", 2) << endl; 
  cout << invoiceCalculator(hourlyRate, 10.00, "\x1b[32;1mMike Jones\x1b[0m\n", 0) << endl; 
  cout << invoiceCalculator(hourlyRate, 5.00, "\x1b[32;1mBricks, Inc\x1b[0m\n", 2) << endl; 
  cout << invoiceCalculator(hourlyRate, 12.00, "\x1b[32;1mTechcrunch\x1b[0m\n", 1) << endl; 
  cout << invoiceCalculator(hourlyRate, 25.00, "\x1b[32;1mIT, LLC\x1b[0m\n", 0) << endl;
  cout << invoiceCalculator(hourlyRate, 3.00, "\x1b[32;1mVia,LLC\x1b[0m\n", 1) << endl;
  return 0;
}


double invoiceCalculator(double rate,double hours,string custName,int discount)
{
  double grossAmountDue = 0.0, netAmountDue = 0.0;
  double hourlyRate = 0.0; 
  static double invoiceTotal = 0.0;
  const double txRate = 1.0825;
  double takeOff = 0.0;
 

grossAmountDue = (rate * hours);
if(discount == 0)
{
  takeOff = 1.0;
}
else if (discount == 1)
{
  takeOff = 0.9;
}
else if (discount == 2)
{
  takeOff = 0.8;
}
netAmountDue = ( ( grossAmountDue * takeOff ) * 1.0825);
cout << "\n\x1b[93;1mDue in 30 days...... or else\x1b[0m";
cout <<"\n" << custName << endl; 
cout << "Gross amount due: \x1b[32;2m$\x1b[0m " << grossAmountDue << endl;
cout << "Net amount due: \x1b[32;2m$\x1b[0m " << netAmountDue << endl;
cout << "hourlyRate: \x1b[32;2m$\x1b[0m " << rate << endl;
cout << "Billing Hours: \x1b[32;2m$\x1b[0m " << hours << endl;
cout << "Invoicetotal: \x1b[32;2m$\x1b[0m ";




return invoiceTotal += netAmountDue;
 
}
 