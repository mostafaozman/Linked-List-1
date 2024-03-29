#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>

using namespace std;

class Student
{
 public:
  Student();
  ~Student(); 

  char* getFirstName();
  char* getLastName();
  float* getGPA();
  int* getID();

 private:
  char firstName[20];
  char lastName[20];
  float GPA;
  int ID; 
};
#endif
