/**
 * @file Officer.cpp
 * @author Isaac Copeland
 * @date 2022-03-09
 * @brief officer class implementation
 * 
 * this file holds the method implementations of child class "Officer"
 */

#include "Officer.h"
#include <iostream>

using namespace std;

/**
 * default constructor initializes all member variables to default values
 *
 * @pre 
 * @post 
 * 
 */
Officer::Officer() : Employee() {
  evilness = 500;
}

/**
 * parameterized constructor sets member variables to corresponding parameter
 *
 * @param int ID employee ID
 * @param int years years employee has worked for company
 * @param double hourlyRate pay by hour
 * @param float hoursWorked hours worked this day
 * @param double evilness EXACT calculation of evilness created in the world
 * @pre 
 * @post 
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

/**
 * calculates Officers pay based upon evillness value
 *
 * @pre 
 * @return double today's pay
 * @post 
 * 
 */
double Officer::calculatePay() {
  return (evilness + hourlyRate) * hoursWorked;
}

/**
 * prints employee attributes to console
 *
 * @pre 
 * @return void the employee's (officer's) data
 * @post 
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}
