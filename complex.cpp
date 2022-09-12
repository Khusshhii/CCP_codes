#include<iostream>
using namespace std;

class complex
{
    private:
        int r;
        int i;

    public:
        void read()
        {
            cout<<"Enter the real part of the complex no : ";
            cin>>r;
            cout<<"\n Enter the imaginary part of the complex no : ";
            cin>>i;
        }
        void display()
        {
            cout<<"THE COMPLEX NO IS : "<<r<<" + i"<<i<<endl;
        }
        friend complex ADD(int a1,complex S);
        friend complex ADD(complex S1,complex S2);
};

complex ADD(int a1,complex S)
{
    complex res;
    res.r=a1+S.r;
    res.i=S.i;
    return res;
}

complex ADD(complex S1,complex S2)
{
    complex res1;
    res1.r=S1.r+S2.r;
    res1.i=S1.i+S2.i;
    return res1;
}

int main()
{
    complex s1,s2,s3,s4,s5;
    int a;
    int choice=0;

    cout<<"\n Enter your choice method 1 or method 2 :";
    cin>>choice;

    if(choice==1)
    {
        cout<<"\n Enter the real part of the first no : ";
        cin>>a;
        s1.read();
        s2=ADD(a,s1);
        s2.display();
    }
    else if(choice==2)
    {
        s3.read();
        s4.read();
        s5=ADD(s3,s4);
        s2.display();
    }
    return 0