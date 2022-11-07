/**
 * @file Maintenace.cpp
 * @author Isaac Copeland
 * @date 2022-03-10
 * @brief maintenance class implementation
 * 
 * this file holds the implementation for the methods of class maintenance
 */

#include "Maintenance.h"
#include <iostream>

using namespace std;

/**
 * a default constructor: sets all member variables to default values
 *
 * @pre 
 * @post 
 * 
 */
Maintenance::Maintenance() : Employee() {
  issuesSolved = -1;
}

/**
 * a parameterized constructor: sets all member variables to corresponding arguments
 *
 * @param int ID the employee's ID
 * @param int years the amount of years employee has worked at compony
 * @param double hourlyRate pay by hour
 * @param float hoursWorked hours worked today
 * @param int issuesSolved the number of issues Maintanence guy has solved while he has been at company
 * @pre 
 * @post 
 * 
 */
Maintenance::Maintenance(int ID, int years, double hourlyRate, float hoursWorked, int issuesSolved) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->issuesSolved = issuesSolved;
}
double Maintenance::calculatePay() {
  return Employee::calculatePay() + ((Employee::calculatePay() * 0.10) * issuesSolved);
}
void Maintenance::print() {
  Employee::print();
  cout << " Issues Solved: " << issuesSolved << endl;
}
