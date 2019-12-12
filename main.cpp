#include <iostream>
#include "node.h"

using namespace std;

void add(int newVal);
void print(Node* next);

Node* head = NULL;

int main()
{
  add(5);
  print(head);
  add(7);
  print(head);
  add(9);
  print(head); 
}

void add(int newVal)
{
  Node* current = head;

  if (current == NULL)
    {
      head = new Node();
      head -> setValue(newVal); 
    }
  else
    {
      while (current -> getNext() != NULL)
	{
	  current = current -> getNext(); 
	}
      current -> setNext(new Node());
      current -> getNext() -> setValue(newVal); 
    }
}

void print(Node* next)
{
  if (next == head)
    {
      cout << "list: "; 
    }
  if (next != NULL)
    {
      cout << next -> getValue() << " ";
      print(next -> getNext()); 
    }
}
