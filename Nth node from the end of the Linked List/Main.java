#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
};
void append(struct node **head,int value)
{
    //struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *newnode=new node;
    struct node *temp=*head;
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
    struct node* temp=*head;
    if(temp!=NULL)
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
void print_n(struct node **head,int k)
{
    struct node *temp=*head;
    if(k<1)
    {
        cout<<"There is no nth node in the list";
        exit(0);
    }
    while(k>1)
    {
        temp=temp->next;
        k--;
    }
    cout<<temp->data<<" is the nth node element in the list";

}
int main()
{
    int n,c=0,k;
    struct node *head=NULL;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        append(&head,n);
        c++;
    }
    cin>>k;
    //print(&head);
    cout<<"Enter the nth node:\n";
    print_n(&head, c-k+1);
    return 0;
}
