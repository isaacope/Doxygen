/**
 * @file Employee.cpp
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief implementation of Employee
 * 
 * this file holds the implementation for the methods of class Employee
 */

#include "Employee.h"
#include <iostream>

using namespace std;

/**
 * default constructor assigns all prviate member variables to -1
 *
 * @pre 
 * @post 
 * 
 */
Employee::Employee() {
  ID = -1;
  years = -1;
  hourlyRate = -1;
  hoursWorked = -1;
}

/**
 * paramaterized constructor sets all private member variables to arguments passed in
 *
 * @param int ID employee ID
 * @param int years years employed
 * @param double hourlyRate pay per hour
 * @param float hoursWorked hours worked today
 * @pre 
 * @post 
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

/**
 * increments years by one and give 0.2% raise to employee
 *
 * @pre 
 * @return void prints a congratulation message as well
 * @post 
 * 
 */
void Employee::anniversary() {
  years++;
  double raise = hourlyRate * 0.002;
  hourlyRate += raise;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!" << endl;
}

/**
 * calculates pay based on hours worked today
 *
 * @pre 
 * @return double amount recieved for today's work
 * @post 
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

/**
 * prints member variable information
 *
 * @pre 
 * @return void outputs values of ID, years, hourlyRate, and hoursWorked
 * @post 
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ':'
       << "\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate
       << "\n Hours Worked: " << hoursWorked << endl;
}
