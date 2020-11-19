#include <iostream>

using namespace std;
// structure of a node in the Binary Search tree
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// adding new node to the binary search tree
void add_to_tree(struct node **root,int value)
{
    // creating new node
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    struct node *node=*root;
    if(node==NULL)
    {
        *root=newnode;
    }
    else
    {
        while(1)
        {
            if(node->data>value)
            {
                if(node->left==NULL)
                    break;
                node=node->left;
            }
            else
            {
                if(node->right==NULL)
                    break;
                node=node->right;
            }
        }
        if(node->data<value)
        {
            node->right=newnode;
        }
        else
        {
            node->left=newnode;
        }
    }
}
//inorder traversal of tree just for reference
void inorder(struct node *node)
{
    if(node==NULL)
        return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
//function to find the height of a tree
int height(struct node *node)
{
    if(node==NULL)
        return 0;
    return 1+max(height(node->left),height(node->right));
}
// function to find the diameter of a tree
int diameter(struct node *node)
{
    if(node==NULL)
        return 0;
    int lheight=height(node->left);
    int rheight=height(node->right);
    int ldiameter=diameter(node->left);
    int rdiameter=diameter(node->right);
    return max(lheight+rheight+1,max(ldiameter,rdiameter));
}
int main()
{
    struct node *root=NULL;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        add_to_tree(&root,x);
    }
    //cout<<root->right->data;
    cout<<endl<<"inorder traversal"<<endl;
    inorder(root);
    cout<<endl<<"height="<<height(root)<<endl;
    cout<<"diameter="<<diameter(root)<<endl;
    return 0;
}
