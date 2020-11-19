#include <iostream>
#include <cstring>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main() 
{
   struct student s1;
   cin.getline(s1.name,50);
   cin>>s1.roll;
   cin>>s1.marks;
   cout<<"\n";
   cout<<"Student Details\n";
   cout<<"Name: "<<s1.name<<"\n";
   cout<<"Roll: "<<s1.roll<<"\n";
   cout<<"Marks: "<<s1.marks<<"\n";
}