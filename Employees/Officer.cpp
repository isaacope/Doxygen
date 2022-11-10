/**
 * @file Officer.cpp
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief source code for Officer
 * 
 * This file holds the method implementations of child class "Officer".
 */

#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() : Employee() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

double Officer::calculatePay() {
  return (evilness + hourlyRate) * hoursWorked;
}

void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}
