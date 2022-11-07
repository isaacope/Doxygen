/**
 * @file Maintenace.h
 * @author Isaac Copeland
 * @date 2022-03-10
 * @brief maintenance class definition
 * 
 * this file holds the definition for child class "Maintenance"
 */

#ifndef MAINTENACE_H
#define MAINTENACE_H

#include "Employee.h"

/**
 * an employee of Business Corp in the position of maintenance
 *
 * @class Maintenance Maintenace.h "hw07-business-corp-employee-management-system-isaacope/Maintenace.h"
 * @brief a maintenance employee
 *
 */
class Maintenance : public Employee {
 private:
  int issuesSolved;
  
 public:
  Maintenance();
  Maintenance(int ID, int years, double hourlyRate, float hoursWorked, int issuesSolved);
  double calculatePay();
  void print();	   
};

#endif //MAINTENACE_H
