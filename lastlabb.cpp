#include<iostream>
#include<string.h>
using namespace std;
class ex
{
   //pointer to array
   /* private:
    int a[10],*p;
    public:
    void get()
    {
        cout<<endl<<"eneter the array";
        for(int i=0;i<4;i++)
        cin>>a[i];
        p=a;
    }
    void dis()
    {
        cout<<endl<<"the array is ";
        for(int i=0;i<4;i++)
        cout<<"\t"<<p[i];
    }*/
    //pointer to string
   private:
    const char *name[10]={"bangalore","hubli","mysore"};

    public:
    void work()
    {
        for(int i=0;i<3;i++)
        {
            cout<<endl<<*(name+i);
        }
    }
*/
    //echo ptr
    /*
    private:
    char *name;
    int len;
    public:
    ex()
    {
        len=0;
        name=new char[len+1];
    }
    void getname()
    {
        char *s;
        s=new char[30];
        cout<<"Enter city name \n";
        cin>>s;
        len=strlen(s);
        name=new char [len+1];
        strcpy(name,s);
    }
    void printName()
    {
        cout<<name<<"\n";
    }

    
};
*/
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}

int main()
{
    ex e1;
   /* e1.get();
    e1.dis();*/
   //e1.work();
  //function pointer
   /*int (*fptr)(int,int);
   fptr=add;
   int resa=fptr(1,2);
   cout<<endl<<"addn    "<<resa;
   fptr=sub;
   int ress=fptr(2,1);
   cout<<endl<<"subn    "<<ress;*/
   //city string
    
   e1.getname();
    e1.printName();
    return 0;
}