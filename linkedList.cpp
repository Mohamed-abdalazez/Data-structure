#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
  int data;
  Node *next;
};

void printLinkedList(Node *n)
{
  while (n != NULL)
  {
    cout << n->data << " ";
    n = n->next;
  }
  cout << endl;
}

void headInsert(Node *&head, int Data)
{
  Node *tempPtr = NULL;
  tempPtr = new Node();
  tempPtr->data = Data;
  tempPtr->next = head;
  head = tempPtr;
}

bool Search(Node *n, int target)
{
  if (n == NULL)
  {
    return false;
  }
  while (n != NULL)
  {
    if (n->data == target)
    {
      return true;
    }
    n = n->next;
  }
  return false;
}

void insert(Node *n, int value)
{
  Node *tempPtr = NULL;
  tempPtr = new Node();
  tempPtr->data = value;
  tempPtr->next = n->next;
  n->next = tempPtr;
}

void remove(Node *before, Node *del)
{
  before->next = del->next;
}

int main()
{
  Node *first = NULL;
  Node *second = NULL;
  Node *third = NULL;
  first = new Node();
  second = new Node();
  third = new Node();

  first->data = 5;
  first->next = second;

  second->data = 6;
  second->next = third;

  third->data = 4;
  third->next = NULL;

  printLinkedList(first);
}
