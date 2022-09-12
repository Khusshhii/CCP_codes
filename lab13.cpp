#include<iostream>
using namespace std;
class time1
{
private:
int h,m,s;
public:
void get();
void dis();
friend time1 add(time1 t1, time1 t2);
};
void time1::get()
{
cout<<endl<<"enter the time in hrs min and sec";
cin>>h>>m>>s;
}
void time1::dis()
{
cout<<endl<<"after addition time is";
cout<<h<<"h"<<m<<"m"<<s<<"s";
}
time1 add(time1 t1, time1 t2)
{

time1 t3;
t3.s=t1.s+t2.s;
t3.m=0;
t3.m=t1.m+t2.m+(t3.s/60);
t3.s=t3.s%60;
t3.m=t1.m+t2.m+t3.m;
t3.h=0;
t3.h=t1.h+t2.h+(t3.h/60);
t3.m=t3.m%60;


return (t3);
}
int main()
{
time1 t1,t2,t3;
t1.get();
t2.get();
t3=add(t1,t2);
t3.dis();
return 0;
}
