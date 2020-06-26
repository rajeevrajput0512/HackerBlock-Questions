#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node*left;
  node* right;

  node( int d)
  {
    data = d;
    left = NULL;
    right = NULL;
  }
};

bool treesidentical( node* A , node* B)
{
  if ( A == NULL && B == NULL)
  {
    return true;
  }

  if ( A != NULL && B != NULL)
  {
    bool ley = treesidentical(A->left, B->left);
    bool rey = treesidentical(A->right, B->right);
    return ley and rey;
  }
  return false;
}

node* buildtree(string str)
{
  node* root = NULL;
  if ( str == "true")
  {
    int d;
    cin >> d;
    root = new node(d);
    string r;
    cin >> r;
    root->left = buildtree(r);
    cin >> r;
    root->right = buildtree(r);
  }

  if ( str == "false")
  {
    return NULL;
  }
  return root;
}


int main()
{
  node*A = buildtree("true");
  node*B = buildtree("true");
  if (treesidentical(A, B))
  {
    cout << "true";
  }
  else
    cout << "false";
  return 0;
}