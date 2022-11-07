/**
 * @file Supervisor.h
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief supervisor class definition
 * 
 * this file contains the definition of child class "Supervisor" and its data members
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * an employee of Business Corp in the supevisor position
 *
 * @class Supervisor Supervisor.h "hw07-business-corp-employee-management-system-isaacope/Supervisor.h"
 * @brief a supervisor
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;

 public:
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
  double calculatePay();
  void print();
};

#endif //SUPERVISOR_H
