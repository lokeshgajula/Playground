#include<iostream>
using namespace std;
struct node 
{
  int data;
  struct node *next;
};
void append(struct node **head,int d)
{
  struct node *temp=*head;
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=d;
  newnode->next=NULL;
  if(*head==NULL)
    *head=newnode;
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
      cout<<temp->data<<"\n";
      temp=temp->next;
    }
  }
}
void swap(struct node **head)
{
  int da;
  struct node *temp=*head;
  if(*head==NULL)
    cout<<"List is empty";
  else
  {
    while(temp!=NULL&&temp->next!=NULL)
    {
      da=temp->data;
      temp->data=temp->next->data;
      temp->next->data=da;
      temp=temp->next->next;
    }
  }
}
int main()
{
  int n;
  struct node *head=NULL;
  while(1)
  {
    cin>>n;
    if(n<0)
      break;
    append(&head,n);
  }
  //print(&head);
  swap(&head);
  print(&head);
}