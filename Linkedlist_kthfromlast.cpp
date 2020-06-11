#include<bits/stdc++.h>
using namespace std;
void start()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

class node
{
public:
  int data;
  node * next;

  node( int d)
  {
    data = d;
    next = NULL;
  }
};

void insertr( node *& head , int data)
{
  if (head == NULL)
  {
    head = new node(data);
    return;
  }

  node * temp = head ;
  while ( temp -> next != NULL)
  {
    temp = temp->next;
  }

  temp-> next = new node( data);
  return;
}

void builtlink( node *& head)
{
  int d;
  cin >> d;
  while ( d != -1)
  {
    insertr(head, d);
    cin >> d;
  }

  return;
}

node* kthlast( node * head , int k)
{
  node* slow = head;
  node * fast = head;
  int pos = 1;
  while ( pos != k)
  {
    pos++;
    fast = fast->next;
  }

  while ( fast -> next != NULL)
  {
    slow = slow -> next;
    fast = fast->next;
  }

  return slow;
}

void printer( node* head)
{
  while ( head != NULL)
  {
    cout << head -> data;
    head = head -> next;
  }

  return;
}

ostream& operator <<(ostream &os, node* &head) {
  printer(head);
  return os;
}

int main()
{
  start();
  node * head = NULL;
  builtlink(head);
  int k;
  cin >> k;
  cout << kthlast(head , k) -> data;
  return 0;
}