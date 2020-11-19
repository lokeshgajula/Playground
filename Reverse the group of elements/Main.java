#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
};
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
void reverse(struct node **head, int k)
{
  int arr[k];
  struct node *temp=*head;
  int c=0;
  if(*head==NULL)
    cout<<"LinkedList is empty";
  else
  {
    while(temp!=NULL)
    {
      if(c==k)
      {
        c=0;
        for(int i=k-1;i>=0;i--)
      	cout<<arr[i]<<"\n";
      }
      if(temp->next==NULL)
      {
        cout<<temp->data<<"\n";
        for(int i=c-1;i>=0;i--)
        {
          cout<<arr[i]<<"\n";
        }
        
      }
      arr[c]=temp->data;
      temp=temp->next;
      c++;
    }
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
  int k;
  cin>>k;
  reverse(&head,k);
  //print(&head);
}