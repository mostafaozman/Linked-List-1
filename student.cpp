#include <iostream>
#include "student.h"

Student::Student()
{

}

Student::~Student()
{
  delete[] &firstName;
  delete[] &lastName;
  delete &ID;
  delete &GPA; 
}

char* Student::getFirstName()
{
  return firstName; 
}

char* Student::getLastName()
{
  return lastName; 
}

int* Student::getID()
{
  return &ID; 
}

float* Student::getGPA()
{
  return &GPA; 
}
