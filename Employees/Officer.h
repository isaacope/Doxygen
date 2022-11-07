/**
 * @file Officer.h
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief officer class definition 
 * 
 * this file holds the definition of child class "Officer" and its data members
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * an executive of Business Corp
 *
 * @class Officer Officer.h "hw07-business-corp-employee-management-system-isaacope/Officer.h"
 * @brief an officer
 *
 */
class Officer : public Employee {
 private:
  double evilness;

 public:
  Officer();
  Officer(int ID, int years, double houlyRate, float hoursWorked, double evilness);
  double calculatePay();
  void print();
};

#endif //OFFICER_H
