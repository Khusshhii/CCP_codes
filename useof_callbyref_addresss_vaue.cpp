#include<iostream>
using namespace std;
void func1(int,int);
void func2(int*,int*);
void func3(int &,int &);
int main()
{
 int a,b,c;
 cin >>a>>b;
 cout<<endl<<a<<b;
 cout<<endl<<&a<<&b<<&c;
 func1(a,b);
 cout<<endl<<a<<b;
 func3(a,b);
 cout<<endl<<a<<b;
}
void func1(int x,int y)
{
 cout<<endl<<&x<<&y;
 x=x+10;
 y=y+15;
 cout<<endl<<x<<y;
}
void func2(int *p1,int *p2)
{
 cout<<p1<<p2;
 *p1=*p1+100;
 *p2=*p2+50;
 cout<<endl<<*p1<<*p2;
}
void func3(int &p ,int &q)
{
 p=p+15;
 q=q+15;
 cout<<endl<<p<<q;
 cout<<endl<<&p<<&q;
} 