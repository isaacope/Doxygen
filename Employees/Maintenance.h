/**
 * @file Maintenance.h
 * @author Isaac Copeland
 * @date 2022-03-10
 * @brief header file for Maintenance
 * 
 * This file holds the definition for child class "Maintenance".
 */

#ifndef MAINTENANCE_H
#define MAINTENACNE_H

#include "Employee.h"

/**
 * This class represents a maintenance employee of Business Corp
 *
 * @class Maintenance Maintenance.h "Employee/Maintenance.h"
 * @brief a maintenance employee of Business Corp
 *
 */
class Maintenance : public Employee {
 private:
  int issuesSolved;
  
 public:
  
/**
 * a default constructor to set all member variables to default values
 *
 * @post all member variables are set to -1
 * 
 */
  Maintenance();

/**
 * a parameterized constructor to sets all member variables to corresponding arguments
 *
 * @param int ID the employee's ID
 * @param int years the amount of years employee has worked at company
 * @param double hourlyRate pay by hour
 * @param float hoursWorked hours worked today
 * @param int issuesSolved the number of issues Maintenance person has solved
 * @post all member variables are assigned appropriate values
 * 
 */
  Maintenance(int ID, int years, double hourlyRate, float hoursWorked, int issuesSolved);

/**
 * mathod to determine the pay of maintenance person based on issuesSolved
 *
 * @return double the earned pay
 * 
 */
  double calculatePay();

/**
 * method to print the maintenance employee data
 *
 * @return void the data is displayed 
 * 
 */
  void print();	   
};

#endif //MAINTENANCE_H
