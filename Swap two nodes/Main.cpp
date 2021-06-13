#include<iostream>
using namespace std;
struct node 
{
  int data;
  struct node *next;
};
void swap(struct node **head,int a,int b)
{
  struct node *temp=*head;
  if(*head==NULL)
    cout<<"List is empty";
  else
  {
    while(temp!=NULL)
    {
      if(temp->data==a)
      {
        temp->data=b;
        temp=temp->next;
        continue;
      }
      if(temp->data==b)
      {
        temp->data=a;
      }
      temp=temp->next;
    }
  }
}
void append(struct node **head,int value)
{
  struct node *temp=*head;
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=value;
  newnode->next=NULL;
  if(*head==NULL)
  {
    *head=newnode;
  }
  else
  {
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=newnode;
  }
}
void print(struct node **head)
{
  struct node *temp=*head;
  if(*head!=NULL)
  {
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
  }
}
int main()
{
  struct node *head=NULL;
  int n,d;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>d;
    append(&head,d);
  }
  //print(&head);
  int a,b;
  cin>>a;
  cin>>b;
  swap(&head,a,b);
  print(&head);
  return 0;
}
