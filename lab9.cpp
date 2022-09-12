#include<iostream>
using namespace std;
class mat
{
private:
int a[2][2];

public:
void get()
{
cout<<endl<<"enter the array";
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
cin>>a[i][j];
}
}
void dis()
{
cout<<endl<<" the matrix is"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
}
friend void transpose(mat ar,mat &tr);
};
void transpose(mat ar, mat &tr)
{
cout<<"Transpose of:";
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
tr.a[i][j]=ar.a[j][i];
}

}
}
int main()
{

mat m1,tr;
m1.get();
m1.dis();
transpose(m1,tr);
tr.dis();
return 0;
}