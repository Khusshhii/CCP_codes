#include <iostream>

using namespace std;

class base
{
    public:
 virtual  void display()=0;//pure virtual fucntion
      // {
     //      cout<<"inside base class\n";
     //  }
       
       void output()
       {
           cout<<"inside base output function\n";
       }
};
class derieved:public base
{
    public:
  void display()
       {
           cout<<"inside derieved class\n";
       }
       
       void output()
       {
           cout<<"inside derieved  output function\n";
       }
       
        void dis()
        {
            cout<<"derieved own function\n";
           
        }
};
class derieved1:public base
{
    public:
  void display()
       {
           cout<<"inside derieved1 class\n";
       }
       
       void output()
       {
           cout<<"inside derieved1  output function\n";
       }
       
        void dis()
        {
            cout<<"derieved own function\n";
           
        }
};

int main()
{
    base *bptr;
 //   base b1;
    derieved d1;
 //   bptr=&b1;
 //   bptr->display(); //base class
 //   bptr->output(); //base output
//    b1->dis();
     bptr=&d1;
     bptr->display(); //derieved class
//     bptr->output();// base class
 //    bptr->dis();//derieved class
    derieved1 d2;
    bptr=&d2;
    bptr->display();
   
}