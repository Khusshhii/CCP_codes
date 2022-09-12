#include<iostream>
using namespace std;
class employee
{
private:
int eno;
char name[10];
float basic,DA,IT,Netsal;

public:
void read()
{
cout<<"\n"<<" ";
cout<<"Enter the details";
cin>>eno>>name>>basic;
}

void display()
{
cout<<"EMP_NO "<<" "<<" NAME "<<" "<<" BASIC "<<"\n";
cout<<eno<<"        "<<name<<"     "<<basic;
}

void calculate();
};

void employee::calculate()
{
DA=0.52*basic;
float gross=basic+DA;
IT=0.3*gross;
Netsal=gross-IT;
cout<<Netsal<<"\n";
}

int main()
{
employee e1,e2,e3,e4;
e1.read();
e1.calculate();
e1.display();
e2.read();
e2.calculate();
e2.display();
e3.read();
e3.calculate();
e3.display();
e4.read();
e4.calculate();
e4.display();

return 0;
}