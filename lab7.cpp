#include<iostream>
using namespace std;
void fun(int a=2,int b=3)
{
cout<<a<<b;
}

int main()
{
fun();
fun(7);
fun(5,6);
return 0;
}