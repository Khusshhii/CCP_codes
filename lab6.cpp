#include<iostream>
using namespace std;
class example
{
private:
int x;
static int y;
static int z;
public:
void read()
{
cin>>x;
y=y+1;
z=z+1;
}
void display()
{
cout<<x<<y<<z;
}
static void disc()
{
//cout<<x;
cout<<"y="<<y<<"\t"<<"z="<<z<<endl;
//display();
}

static void demo()
{
//display();
disc();
//read();
}
void output()
{
display();
disc();
demo();
read();
}
};
int example::y=100;
int example::z;

int main()
{
example e1;
e1.read();
e1.display();
example::disc();
}