/**
 * @file Officer.h
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief header file for Officer 
 * 
 * This file holds the definition of child class "Officer" and its data members.
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * class to represent an officer of Business Corp
 *
 * @class Officer Officer.h "Employees/Officer.h"
 * @brief an officer of Business Corp
 *
 */
class Officer : public Employee {
 private:
  double evilness;

 public:
  
/**
 * default constructor initializes all member variables to default values
 *
 * @post ID, years, hourlyRate, hoursWorked set to -1, evilness set to 500 
 * 
 */
  Officer();

/**
 * parameterized constructor sets member variables to corresponding parameter
 *
 * @param int ID employee ID
 * @param int years years employee has worked for company
 * @param double hourlyRate pay by hour
 * @param float hoursWorked hours worked this day
 * @param double evilness EXACT calculation of evilness created in the world
 * @post all member variables are set to the appropriate values
 * 
 */
  Officer(int ID, int years, double houlyRate, float hoursWorked, double evilness);

  /**
 * calculates Officers pay based upon evillness value
 * 
 * @return double earned pay
 * 
 */
  double calculatePay();

/**
 * prints employee data to console
 *
 * @return void the employee's (officer's) data 
 * 
 */
  void print();
};

#endif //OFFICER_H
