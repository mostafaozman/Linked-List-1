#include <iostream>
#include "node.h"
#include "student.h"

Node::Node(Student* addStudent)
{
  student = addStudent; 
  next = NULL;
}

Node::~Node()
{
  delete &student;
  next  = NULL; 
}

Student* Node::getStudent()
{
  return student; 
}

void Node::setStudent(Student* addStudent)
{
  student = addStudent; 
}

void Node::setNext(Node* newnext)
{
  next = newnext; 
}

Node* Node::getNext()
{
  return next; 
}
