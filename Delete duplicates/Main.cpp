#include<iostream>
using namespace std;
struct node 
{
  int data;
  struct node *next;
};
bool check(struct node **head,int value)
{
  struct node *temp=*head;
  if(*head==NULL)
    return 0;
  else
  {
    while(temp!=NULL)
    {
      if(temp->data==value)
        return 1;
      temp=temp->next;
    }
  }
  return 0;
}
void append(struct node **head,int value){
 if(check(head,value))
  {
       return ;
  }
  else
  {
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=value;
  newnode->next=NULL;
  struct node *temp=*head;
  if(temp==NULL)
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
}
void print(struct node **head)
{
  struct node *temp=*head;
  if(temp!=NULL)
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
  int n,f=0,i=0;
  struct node *head=NULL;
  int arr[100];
  while(1)
  {
    cin>>n;
    
    if(n<0)
      break;
    arr[i++]=n;
    append(&head,n);
    f=1;
  }
  cout<<"Linked list before removal of duplicates\n";
  for(int j=0;j<i;j++)
    cout<<arr[j]<<"\n";
  cout<<"Linked list after removal of duplicates\n";
  //if(f==0)
    //cout<<"List is empty";
  print(&head);
}
