/**
 * @file Employee.h
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief header file for Employee
 * 
 * This file holds the definition of base class "Employee" and its data members.
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * represents any employee of Business Corp
 *
 * @class Employee Employee.h "Employee/Employee.h"
 * @brief an employee of Business Corp
 *
 */
class Employee {
 private:
  int ID;
  int years;

 protected:
  double hourlyRate;
  float hoursWorked;
  
 public:
/**
 * default constructor assigns values to member variables
 *
 * @post all private member variables are assigned to -1
 * 
 */
  Employee();

/**
 * paramaterized constructor assigns value to member variables
 *
 * @param int ID employee ID
 * @param int years years employed
 * @param double hourlyRate pay per hour
 * @param float hoursWorked hours worked in a day
 * @post all member variables are assigned the appropriate values that were passed in
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);

/**
 * increments years by one and gives a 0.2% raise to the employee 
 *
 * @return void prints a congratulation message as well
 * @post hourly rate is increased by 0.2%
 * 
 */
  void anniversary();

/**
 * calculates pay based on hours worked in a day
 *
 * @return double the earned pay
 * 
 */
  virtual double calculatePay();

/**
 * prints the member variable information
 *
 * @return void prints the data stored in each member variable of the associated employee 
 * 
 */
  virtual void print();
};

#endif //EMPLOYEE_H
