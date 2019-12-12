#include <iostream>
#include "node.h"

Node::Node()
{
  value = 0 ;
  next = NULL;
}

Node::~Node()
{
  delete &value;
  next  = NULL; 
}

void Node::setValue(int newVal)
{
  value = newVal; 
}

int Node::getValue()
{
  return value;
}

void Node::setNext(Node* newnext)
{
  next = newnext; 
}

Node* Node::getNext()
{
  return next; 
}
