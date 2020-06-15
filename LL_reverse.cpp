#include<bits/stdc++.h>
using namespace std;


class node
{
public:
	int data;
	node* next;
	node( int d)
	{
		data = d;
		next = NULL;
	}

};

void insertattail( node* &head, int d)
{
	if ( head == NULL)
	{
		head = new node(d);
		return;
	}

	node* temp = head;
	while ( temp->next != NULL)
	{
		temp = temp-> next;
	}

	temp-> next = new node(d);
	return;
}
void buildlist(node* &head, int n)
{
	for ( int i = 0 ; i < n; i++)
	{
		int d;
		cin >> d;
		insertattail( head, d);
	}
}

void print( node* head)
{
	node* temp = head;
	while ( temp != NULL)
	{
		cout << temp-> data << " ";
		temp = temp -> next;
	}
}

node* reverse(node* &head, int k)
{
	node* prev = NULL;
	node* curr = head;
	node* nextnode;
	node* temp = head;
	int count = 0;
	while ( count < k)
	{
		nextnode = curr-> next;
		curr->next = prev;
		prev = curr;
		curr = nextnode;
		count++;
	}

	if ( nextnode != NULL)
	{
		head->next = reverse(nextnode, k);
	}

	return prev;
}
int main(int argc, char const *argv[])
{
	node* head = NULL;
	int n;
	cin >> n;
	int k;
	cin >> k;
	buildlist(head, n);

	head = reverse( head, k);
	print(head);

	return 0;
}