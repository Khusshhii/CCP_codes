#include<iostream>
using namespace std;
class B;
class A
{
private:
int x;
public:
void get()
{
cin>>x;
}
friend void add(A o1, B o2);
};
class B
{
private:
int y;  
public:
void get()
{
cin>>y;
}
friend void add(A o1, B o2);
};
void add(A o1, B o2)
{
int sum;
sum=o1.x+o2.y;
cout<<endl<<"sum is"<<sum;
}
int main()
{
A o1;
B o2;
o1.get();
o2.get();
add(o1,o2);
return 0;
}