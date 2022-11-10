/**
 * @file Maintenance.cpp
 * @author Isaac Copeland
 * @date 2022-03-10
 * @brief source code for Maintenance
 * 
 * This file holds the implementation for the methods of class maintenance.
 */

#include "Maintenance.h"
#include <iostream>

using namespace std;

Maintenance::Maintenance() : Employee() {
  issuesSolved = -1;
}

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
