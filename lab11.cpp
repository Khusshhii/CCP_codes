#include<iostream>
using namespace std;
class A;
class B
{
private:
int x;
public:
void get(A &x);

};
class A
{
int a,b;
public:
void read()
{
cin>>a>>b;
}
friend void B::get(A &x);

};
void B::get(A &x)
{
cout<<x.a<<endl;
cout<<endl<<x.b;
}
int main()
{
A o;
B o1;
o.read();
o1.get(o);

return 0;
}
