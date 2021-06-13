#include<iostream>
using namespace std;
struct BNode 
{
  int data;
  struct BNode *left;
  struct BNode *right;
};
void insert_to_btree(struct BNode **root,int d)
{
  struct BNode *newnode=(struct BNode *)malloc(sizeof(struct BNode));
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
void inorder(struct BNode *root)
{
  struct BNode *node=root;
  if(node==NULL)
    return;
  inorder(node->right);
  cout<<"Maximum element is "<<node->data;
  exit(0);
  inorder(node->left);
 
  
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
    insert_to_btree(&root,z);
  }
  //cout<<"hi";
  inorder(root);
  return 0;
}
