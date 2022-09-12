#include<iostream>
using namespace std;
struct student
{
 char USN[10];
 char name[20];
 int marks;
 void read()
 {
 cin>>USN>>name>>marks;
 }
 void display()
 {
 cout<<USN<<name<<marks;
 }
};
int main()
{
 struct student s1;
 s1.read();
 s1.display();
 return 0;
} 