/**
 * @file Supervisor.cpp
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief source code for Supervisor
 * 
 * This file holds the implementation of the methods from the supervisor child class.
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() : Employee() {
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

double Supervisor::calculatePay() {
  return ((Employee::calculatePay() * 0.01) * numSupervised) + Employee::calculatePay();
}

void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}
