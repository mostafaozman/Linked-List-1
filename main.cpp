#include <iostream>
#include <stdio.h>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;


int main()
{
  Student* student = new Student;
  cout << "Enter a first name: ";
  cin.get(student -> getFirstName(), 20);
  cin.clear();
  cin.ignore(10000, '\n');

  cout << "Enter a last name: ";
  cin.get(student -> getLastName(), 20);
  cin.clear();
  cin.ignore(1000000, '\n');

  cout << "Enter an ID number: ";
  cin >> *student -> getID();
  cin.clear();
  cin.ignore(10000, '\n');
  
  cout << "Enter a GPA: ";
  cin >> *student -> getGPA();
  cin.clear();
  cin.ignore(10000, '\n');
  
  cout << endl;
  cout << student -> getFirstName() << " " << student -> getLastName() << endl;
  cout << "ID: " << *student -> getID() << endl;
  printf("%.2f\n", *student -> getGPA());
  cout << endl;
  
  Student* student2 = new Student;
  cout << "Enter a first name: ";
  cin.get(student2 -> getFirstName(), 10);
  cin.clear();
  cin.ignore(1000000, '\n');
  
  cout << "Enter a last name: ";
  cin.get(student2 -> getLastName(), 10);
  cin.clear();
  cin.ignore(1000000, '\n');
  
  cout << "Enter an ID number: ";
  cin >> *student2 -> getID();
  cin.clear();
  cin.ignore(1000000, '\n');
  
  cout << "Enter a GPA: ";
  cin >> *student2 -> getGPA();
  cin.clear();
  cin.ignore(1000000, '\n');
  
  cout << endl;
  cout << student2 -> getFirstName() << " " << student2 -> getLastName() << endl;
  cout << *student2 -> getID() << endl;
  printf("%.2f\n", *student2 -> getGPA());
  cout << endl;
  
  Node* firstNode = new Node(student);
  Node* secondNode = new Node(student2);
  //  firstNode -> setStudent(student);
  firstNode -> setNext(secondNode);
  //  secondNode -> setStudent(student2);
  
  cout << firstNode -> getStudent() -> getFirstName() << " " << firstNode -> getStudent() -> getLastName() << endl;
  cout << firstNode -> getNext() -> getStudent() -> getFirstName() << " " << firstNode -> getNext() -> getStudent() -> getLastName() << endl;
  return 0;
}
