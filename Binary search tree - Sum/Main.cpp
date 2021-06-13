#include <iostream>
#include <list>
using namespace std;
struct BNode
{
    int data;
    struct BNode *left;
    struct BNode *right;
};
void btree_insert(int x,struct BNode **root)
{
    struct BNode *newnode=(struct BNode *)malloc(sizeof(struct BNode));
    struct BNode *temp=*root;
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    if(*root==NULL)
    {
        *root=newnode;
    }
    else
    {
        while(1)
        {
            if(temp->data>x)
            {
                if(temp->left==NULL)
                {
                    temp->left=newnode;
                    return;
                }
                temp=temp->left;
            }
            else
            {
                if(temp->right==NULL)
                {
                    temp->right=newnode;
                    return;
                }
                temp=temp->right;
            }
        }
    }
    return;
}
void inorder_traversal(struct BNode *root, int *c)
{
    if(root==NULL)
        return;
    inorder_traversal(root->left,c);
    *c=*c+root->data;
    inorder_traversal(root->right,c);
}
void preorder_traversal(struct BNode *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
void postorder_traversal(struct BNode *root)
{
    if(root==NULL)
        return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}
void levelorder_traversal(struct BNode *root)
{
    list<BNode *> queue;
    struct BNode *current=root;
    queue.push_back(current);
    while(queue.size())
    {
        current=queue.front();
        queue.pop_front();
        cout<<current->data<<" ";
        if(current->left)
            queue.push_back(current->left);
        if(current->right)
            queue.push_back(current->right);

    }

}
BNode *minimum_value_node(BNode *node)
{
    BNode *current=node;
    while(current!=NULL && current->left!=NULL)
    {
        current=current->left;
    }
    return current;
}
void delete_node(struct BNode *&node,int value)
{
    if(node==NULL)
        return;
    else if(value<node->data)
    {
        delete_node(node->left,value);
    }
    else if(value>node->data)
    {
        delete_node(node->right,value);
    }
    else
    {
        if(node->left==NULL && node->right==NULL)
        {
            delete node;
            node=NULL;
        }
        else if(node->left&&node->right)
        {
            BNode *successor = minimum_value_node(node->right);
            node->data=successor->data;
            delete_node(node->right,successor->data);
        }
        else
        {
            BNode *current=node;
            BNode *child=(node->left)?node->left:node->right;
            node=child;
            delete current;
        }
    }
}
int main()
{
    struct BNode *root=NULL;
    int x;
    while(1)
    {
        cin>>x;
        if(x<0)
          break;
        btree_insert(x,&root);
    }
    int res=0;
    inorder_traversal(root,&res);
    cout<<"Sum of all nodes are "<<res;
    return 0;
}
