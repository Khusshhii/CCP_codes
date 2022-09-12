#include<iostream>
using namespace std;
class matrix1{
    int a[100][100];
    int r;
    int c;
    public:
    void read()
    {
        cout<<"Enter rows\n";
          cin>>r;
        cout<<"Enter columns\n";
         cin>>c;
        cout<<"Enter numbers";
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
         cin>>a[i][j];
 }
   void display()
   {
          for(int i=0;i<2;i++)
            {
                cout<<"\n";
                for(int j=0;j<2;j++)
                    cout<<a[i][j]<<" ";
            }        
   }
   int operator == (matrix1 &a)
   {
       if(r==a.r && c==a.c)
          return 1;
       else 
          return 0;   
   }
  matrix1 operator + (matrix1 &p)
  {
      matrix1 d;
      for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        d.a[i][j]=a[i][j]+p.a[i][j];
    return d; 
  }

   matrix1 operator - (matrix1 &p)
  {
      matrix1 d;
      for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        d.a[i][j]=a[i][j]-p.a[i][j];
    return d; 
  }

};



int main()
{
    matrix1 a,b,c,d;
    cout<<"\nEnter first array\n";
    a.read();
    cout<<"\nEnter second array\n";
    b.read();
    if(a==b)
    {
        c=a+b;
        cout<<"SUM:\n";
        c.display();
        d=a-b;
        cout<<"\nDifference:\n";
        d.display();
    }
    else
    cout<<"Not possible\n";
}