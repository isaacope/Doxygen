/**
 * @file Employee.cpp
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief source code for Employee
 * 
 * This file holds the implementation for the methods of Employee.
 */

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
  ID = -1;
  years = -1;
  hourlyRate = -1;
  hoursWorked = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

void Employee::anniversary() {
  years++;
  double raise = hourlyRate * 0.002;
  hourlyRate += raise;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!" << endl;
}

double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

void Employee::print() {
  cout << "Printing information for employee " << ID << ':'
       << "\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate
       << "\n Hours Worked: " << hoursWorked << endl;
}
