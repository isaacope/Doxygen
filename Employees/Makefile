#
# Makefile for Assignment 7: Business Corp Employee Management System
# Typing 'make' or 'make employee' will create an executable file for testing
#

# Start by defining variables for the compiler and compiler flags (makes it easy to change later)
# We can then use the variables later with $()

CC = g++
CFLAGS = -g -Wall -Wextra

# Simply calling 'make' will invoke whatever entry comes first in the file
# We've set it up to be the default entry (a good habit)

default: employee

# List the object files needed to create the executable file.  For this assignment:
# Employee.o, Supervisor.o, Officer.o, Maintenance.o, main.o

employee: Employee.o Supervisor.o Officer.o Maintenance.o main.o
	$(CC) $(CFlags) -o employee Employee.o Supervisor.o Officer.o Maintenance.o main.o

# First, the rule to create Employee.o

Employee.o: Employee.cpp Employee.h
	$(CC) $(CFLAGS) -c Employee.cpp

# Then, the rule to create Supervisor.o

Supervisor.o: Supervisor.cpp Supervisor.h
	$(CC) $(CFLAGS) -c Supervisor.cpp

# Then, the rule to create Officer.o

Officer.o: Officer.cpp Officer.h
	$(CC) $(CFLAGS) -c Officer.cpp

# Then, the rule to create Maintenance.o

Maintenance.o: Maintenance.cpp Maintenance.h
	$(CC) $(CFLAGS) -c Maintenance.cpp

# Then, the rule to create main.o

main.o:	main.cpp Employee.h
	$(CC) $(CFLAGS) -c main.cpp

# Now the logic to clean things up! (invoked with 'make clean')

clean:
	$(RM) employee *.o *~
