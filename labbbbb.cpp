#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    void read()
    {
        cout<<"Enter real & imaginary part";
        cin>>r>>i;
    }
    void display()
    {
        cout<<"r="<<r<<"i="<<i<<endl;
    }
    complex add(complex c);
};
complex complex::add(complex c)
{
    complex res;
    res.r=r+c.r;
    res.i= i+c.i;
    return(res);
}
 
int main()
{
   complex c1;
    complex c2,c3;
   
    c1.read();
    c2.read();
    c3=c1.add(c2);
    c3.display();
    c3=c2.add(c1);
    return 0;
}
