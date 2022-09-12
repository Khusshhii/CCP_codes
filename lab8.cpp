#include<iostream>
using namespace std;
void abc(char c)
{
cout<<c<<endl;
}
void abc(int i)
{
cout<<i<<endl;
}
void abc(int i,int j)
{
cout<<i<<endl<<j<<endl;
}
void abc(int i,char c,float f)
{
cout<<i<<endl<<c<<endl<<f<<endl;
}
void abc(char s[10])
{
cout<<s<<endl;
}
int main()
{
abc(10);
abc('I');
abc(10,100);
abc(10,'q',6.3);
abc('E');
}