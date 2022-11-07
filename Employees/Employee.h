/**
 * @file Employee.h
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief an employee class
 * 
 * this file holds the definition of base class "Employee" and its data members
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * represents any employee of Business Corp
 *
 * @class Employee Employee.h "hw07-business-corp-employee-management-system-isaacope/Employee.h"
 * @brief an employee
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
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
  void anniversary();
  virtual double calculatePay();
  virtual void print();
};

#endif //EMPLOYEE_H
