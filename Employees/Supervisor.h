/**
 * @file Supervisor.h
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief header file for Supervisor
 * 
 * This file contains the definition of child class "Supervisor" and its data members.
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * an employee of Business Corp in the supevisor position
 *
 * @class Supervisor Supervisor.h "Employees/Supervisor.h"
 * @brief a supervisor of Business Corp
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;

 public:
  
/**
 * default constructor initializes all member variables to -1
 *
 * @post numSupervised is set to -1 like all other variables
 * 
 */
  Supervisor();

/**
 * parameterized constructor initializes members according to arguments
 *
 * @param int ID emoloyee ID
 * @param int years years worked
 * @param double hourlyRate pay per hour
 * @param float hoursWorked time worked during a given day
 * @param int numSupervised employees under this supervisor
 * @post all member variables are assigned the appropriate values
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);

/**
 * calculates pay of a supervisor
 *
 * @return double the daily pay of a supervisor based upon numSupervised 
 * 
 */
  double calculatePay();

/**
 * prints data of employee in addition to supervisor
 *
 * @return void prints number of supervised employees as well as basic employee data
 * 
 */
  void print();
};

#endif //SUPERVISOR_H
