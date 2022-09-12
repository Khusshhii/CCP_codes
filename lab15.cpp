#include<iostream>
using namespace std;


class matrix{
    int **ptr;
    public:
    matrix()
    {
        ptr=new int*[2];
        for(int i=0;i<2;i++)
        {
            ptr[i]=new int[2];
        }
    }
    void input()
    {
        int i,j;
        cout<<"Enter matrix";
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
            
             cin>>*(*(ptr+i)+j);

    }
    void output()
    {
         for(int i=0;i<2;i++)
            {
                cout<<"\n";
                for(int j=0;j<2;j++)
                    cout<<*(*(ptr+i)+j)<<" ";
            }        
    }
};
int main()
{
   class matrix m;
   m.input();
   m.output();
   return 0;
}
