#include<iostream>
using namespace std;
class time1
{
private:
int hr,min,sec;
public:
time1()
{
hr=2;
min=30;
sec=45;
}
time1(int h,int m=33, int s=2)
{
hr=h;
min=m;
sec=s;
}
time1(time1 &t2)
{
hr=t2.hr;
min=t2.min;
sec=t2.sec;
}

void dis()
{
cout<<endl<<"time is";
cout<<endl<<hr<<"h"<<min<<"m"<<sec<<"s";
}
};
int main()
{
int h,m,s;
time1 t1;
t1.dis();
time1 t2(3,4);
t2.dis();
time1 t3(4,5,6);
t3.dis();
cout<<endl<<"enter time in h m and s";
cin>>h>>m>>s;
time1 t4(h,m,s);
t4.dis();
time1 t5(t4);
t5.dis();

return 0;
}