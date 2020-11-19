#include<iostream>
using namespace std;
struct BNode 
{
  int data;
  struct BNode *left;
  struct BNode *right;
};
void insert_to_btree(int d,struct BNode **root)
{
  struct BNode *newnode=(struct BNode *)malloc(sizeof(struct BNode ));
  newnode->data=d;
  newnode->left=NULL;
  newnode->right=NULL;
  if(*root==NULL)
  {
    *root=newnode;
  }
  else
  {
    struct BNode *node=*root;
    while(1)
    {
      if(d<node->data)
      {
        if(node->left==NULL)
        {
          node->left=newnode;
          return;
        }
        node=node->left;
      }
      else if(d>node->data)
      {
        if(node->right==NULL)
        {
          node->right=newnode;
          return;
        }
        node=node->right;
      }
    }
  }
  return;
}
void infix(struct BNode *root)
{
  struct BNode *node=root;
  if(node==NULL)
    return;
  infix(node->left);
  cout<<node->data<<" ";
  infix(node->right);
}
int traverse(struct BNode *root)
{
  struct BNode *node=root;
  if(node==NULL)
    return 0;
  if(node->left==NULL && node->right==NULL)
    return node->data;
  
  return traverse(node->left)+traverse(node->right);
}
int main()
{
  struct BNode *root=NULL;
  int z;
  while(1)
  {
    cin>>z;
    if(z<0)
      break;
    insert_to_btree(z,&root);
  }
  //cout<<"out of loop";
  //infix(root);
  int sum=traverse(root);
  cout<<"Sum of all leaf nodes are "<<sum;
  
  return 0;
}