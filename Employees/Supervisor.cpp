/**
 * @file Supervisor.cpp
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief implementation of supervisor
 * 
 * this file holds the implementation of the methods from the supervisor child class
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

/**
 * initializes all members to -1
 *
 * @pre 
 * @post 
 * 
 */
Supervisor::Supervisor() : Employee() {
  numSupervised = -1;
}

/**
 * initializes members according to arguments
 *
 * @param int ID emoloyee ID
 * @param int years years worked
 * @param double hourlyRate pay per hour
 * @param float hoursWorked time worked during a given day
 * @param int numSupervised employees under this supervisor
 * @pre 
 * @post 
 * 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) { // changed from initializing all
  this->numSupervised = numSupervised;
}

/**
 * calculates pay of a supervisor
 *
 * @pre 
 * @return double the daily pay of a supervisor based upon numSupervised
 * @post 
 * 
 */
double Supervisor::calculatePay() {
  return ((Employee::calculatePay() * 0.01) * numSupervised) + Employee::calculatePay();
}

/**
 * prints aspects of employee in addition to supervisor
 *
 * @pre 
 * @return void now prints number of supervised employees
 * @post 
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}
