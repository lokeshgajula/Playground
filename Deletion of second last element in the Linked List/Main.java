#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
};
void print(struct node **head)
{
  struct node *temp=*head;
  if(*head!=NULL)
  {
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
  }
}
void del(struct node **head)
{
  struct node *temp=*head;
  struct node *mid;
  if(temp==NULL || temp->next==NULL)
  {
    cout<<"Deletion of second last element is not possible";
    return;
  }
  else if(temp->next->next==NULL)
  {
    *head=temp->next;
    free(temp);
  }
  else
  {
    while(temp->next->next->next!=NULL)
    {
      temp=temp->next;
    }
    mid=temp->next;
    temp->next=mid->next;
    free(mid);
  }
  print(head);
}

void append(struct node **head,int value)
{
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=value;
  newnode->next=NULL;
  struct node *temp=*head;
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

int main()
{
  struct node *head=NULL;
  int n;
  while(1)
  {
    cin>>n;
    if(n<0)
      break;
    append(&head,n);
  }
  //print(&head);
  del(&head);
  //cout<<"\n";
  
}