//project : STORE MANAGEMENT//
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
    class store
 {
    protected:
        char name[20][20];
        float price[20];
        int sum,code[20];

    public:
    //Default constructor 
        store()
        {
         sum=0;
         temp=0;
        }
        char category[20];
        int temp;
        void insert();
        void add();
        void display();
        void search();
        void remove();
        void total_amount();
        void catego_amount();
        void error1();
        void initial_task();
        int function1();
 };
     void store::insert()
   {
    int i,n,k;
    cout<<"Enter the category:";
    cin>>category;
    cout<<"How many items do you wish to enter:";
    cin>>n;
    for(i=temp;i<n;i++)
    {
      cout<<"Enter the name of item=";
      cin>>name[temp];
      cout<<"Enter its code=";
      cin>>code[temp];
      cout<<"Enter the price=";
      cin>>price[temp];
      temp++;
      sum=sum+price[i];
    }
   }
     void store::add()
   {
    int i,n;
    cout<<"Enter the name of item=";
    cin>>category;
    cout<<"How many items do you wish to enter:";
    cin>>n;
    for(i=temp;i<n;i++)
    {
      cout<<"Enter the name of item=";
      cin>>name[temp];
      cout<<"Enter its code=";
      cin>>code[temp];
      cout<<"Enter the price=";
      cin>>price[temp];
      temp++;
      sum=sum+price[i];
    }
   }
     void store::display()
  {
    int i;
    cout<<"under the "<<category<<" catagory the items are:"<<'\n'<<'\n';
    cout<<"Item name"<<'\t';
    cout<<"Code"<<'\t';
    cout<<"Price"<<'\t'<<'\n';
    for(i=0;i<temp;i++)
    {

      cout<<name[i]<<'\t'<<'\t';
      cout<<code[i]<<'\t';
      cout<<price[i]<<'\n'<<'\n';
     }
     cout<<'\n'<<'\n';
   }
    void store::search()
  {
      int i,m;
      cout<<"Enter the code:";
      cin>>m;
      for(i=0;i<temp;i++)
      {
    if(code[i]==m)
    {
    cout<<"Item name is ="  <<name[i]<<'\n';
    cout<<"Price is="<<price[i]<<'\n'<<'\n';
    }
    else
    cout<<"Wrong Code entereed! TRY AGAIN:) "<<'\n'<<'\n';
      }
      cout<<'\n'<<'\n';
  }
     void store::remove()
  {
      int i,m;
      cout<<"Enter the code:";
      cin>>m;
      for(i=0;i<temp;i++)
      {
    if(code[i]==m)
    {
      price[i]=0;
    }
    else
    cout<<"Wrong Code entereed! TRY AGAIN:)"<<'\n'<<'\n';
      }
      cout<<'\n'<<'\n';
  }
    void store::total_amount()
    {
     cout<<"The total price of all the items in all categories is="<<sum<<'\n'<<'\n';
    }
    void store:: catego_amount()
    {
    cout<<"under the "<<category<<" catagory the total price of the items are="<<sum<<'\n'<<'\n';
    }
    void store::error1()
    {
      cout<<"Insert atleast one item.";
      cout<<'\n'<<'\n';
    }
    void store::initial_task()
    {
  cout<<"Choose one of the following options"<<'\n';
  cout<<"1.To INSERT press 1"<<'\n';
  cout<<"2.To ADD press 2"<<'\n';
  cout<<"3.To DISPLAY press 3"<<'\n';
  cout<<"4.To SEARCH press 4"<<'\n';
  cout<<"5.To REMOVE press 5"<<'\n';
  cout<<"6.To see the TOTAL PRICE press 6"<<'\n';
  cout<<"7.To EXIT press 0"<<'\n';
    }
    int store::function1()
    {
    int a1;
    cout<<"choose an option to enter into the following available options"<<'\n';
    cout<<"1.Press 1 for CLOTHES."<<'\n'<<"2.Press 2 for DAILY usage stuff."<<'\n'
    <<"3.Press 3 for RAW MATERIALS."<<'\n'<<"4.Press 0 for EXIT."<<'\n';
    cin>>a1;
    return a1;
    }
    class cloth:public store
    {
    private:
        char clt[15],cr[15];
    public:
       cloth operator+(cloth);
       void insert_cl();
       void display_cl();
    };
   cloth  cloth::operator+(cloth c)
   {
     cloth ob1;
     ob1.sum=sum+c.sum;
     return (ob1);
   }
   void cloth::insert_cl()
   {
   cout<<"what type of cloth is this ?(cotton,polyester,rayon and so on)"<<'\n';
   cin>>clt;
   cout<<"What's the color of the cloth ?"<<'\n';
   cin>>cr;
   cout<<'\n'<<'\n'<<'\n';
   }
   void cloth::display_cl()
   {
   cout<<"Type :"<<clt<<'\n';
   cout<<"Color :"<<cr<<'\n'<<'\n'<<'\n';
   }
    class dusing:public store
    {
      private:
          char dus[15];
      public:
       dusing operator+(dusing);
       void insert_du();
       void display_du();
    };
   dusing dusing::operator+(dusing c)
   {
     dusing ob2;
     ob2.sum=sum+c.sum;
     return (ob2);
   }
   void dusing::insert_du()
   {
    cout<<"what type of daily using thing is this ?(Cosmetics,Grocery and so on)"<<'\n';
    cin>>dus;
    cout<<'\n'<<'\n'<<'\n';
   }
   void dusing::display_du()
   {
    cout<<"Type:" <<dus<<'\n'<<'\n'<<'\n';
   }
    class material:public store
    {
    private:
        int sp;
        char mat[14],qu[15];
    public:
      material operator+(material c);
       void insert_ma();
       void display_ma();
    };
    material material::operator+(material c)
    {
     material ob3;
     ob3.sum=sum+c.sum;
     return (ob3);
    }
    void material::insert_ma()
    {
    cout<<"What type of raw material is this ?(Vegetable,Pulses?)"<<'\n';
    cin>>mat;
    cout<<"Quality?(super fresh,fresh,old)"<<'\n';
    cin>>qu;
    cout<<"Best before?"<<'\n';
    cin>>sp;
    cout<<'\n'<<'\n'<<'\n';
    }
    void material::display_ma()
    {
    cout<<"Type:" <<mat<<'\n';
    cout<<"Quality:" <<qu<<'\n';
    cout<<"Best Before:" <<sp<<'\n'<<'\n'<<'\n';
    }
  int main()
 {
    cloth t[20],f1,ob;
    dusing du[20],f2,ob1;
    material ma[20],f3,ob2;
    int i,x=0,n,a,j,k,l,s,m,b,c,q,g=0,a1,y=0,z=0;
    char inp[20];
    //clrscr();
    for(i=0;;i++)
    {
    a1=ob.function1();
    switch(a1)
    {
    case 1:
    for(i=0;;i++)
     {
       ob.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(x>0)
         {
           cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONCE"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"How many Categories do you want to Insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              t[x].insert();
              t[x].insert_cl();
               x++;
             }
          }
         break;
      case 2:
        if(x<=0)
        {ob.error1();
        break;}
         else
         {
           cout<<"How many categories do you want to Add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             t[x].add();
             t[x].insert_cl();
              x++;
             }
          break;
          }
       case 3:
        if(x<=0)
        {ob.error1();
        break;}
         else
         {
          for(s=0;s<x;s++)
           {
             t[s].display();
             t[s].display_cl();
           }
           break;
         }
       case 4:
        if(x<=0)
        {ob.error1();
        break;}
        if(x>0)
        {
         cout<<"Enter your Desired Category=";
         cin>>inp;
         for(c=0;c<x;c++)
         {
           b=strcmp(inp,t[c].category);
           if(b==0)
           break;
          }
          if(b==0)
            {t[c].search();
            t[c].display_cl();}
           break;
          }
        case 5:
        if(x<=0)
        {ob.error1();
          break;}
        else
        {
         cout<<"Enter your Desired Category=";
         cin>>inp;
         for(c=0;c<x;c++)
         {
           b=strcmp(t[c].category,inp);
           if(b==0)
           break;
          }
          if(b==0)
            t[c].remove();
           break;
          }
         case 6:
        if(x<=0)
         {ob.error1();
          break;}
        else
        {
          for(z=g;z<x;z++)
          {
            f1=f1+t[z];
            g++;
          }
        for(i=0;i<x;i++)
        t[i].catego_amount();
        f1.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
       case 2:
    for(i=0;;i++)
     {
       ob1.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(y>0)
         {
           cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONES"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"How many categories do you want to Insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              du[y].insert();
              du[y].insert_du();
               y++;
             }
          }
         break;
      case 2:
        if(y<=0)
        {ob1.error1();
        break;}
         else
         {
           cout<<"How many categories do you want to Add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             du[y].add();
             du[y].insert_du();
              y++;
             }
          break;
          }
       case 3:
        if(y<=0)
        {ob1.error1();
        break;}
         else
         {
          for(s=0;s<y;s++)
           {
             du[s].display();
             du[s].display_du();
           }
           break;
         }
       case 4:
        if(y<=0)
        {ob.error1();
        break;}
        if(y>0)
        {
         cout<<"Enter your Desired Category=";
         cin>>inp;
         for(c=0;c<y;c++)
         {
           b=strcmp(inp,du[c].category);
           if(b==0)
           break;
          }
          if(b==0)
           { 
            du[c].search();
            du[c].display_du();
           }
           break;
          }
        case 5:
        if(y<=0)
        {ob1.error1();
          break;}
        else
        {
         cout<<"Enter your Desired Category=";
         cin>>inp;
         for(c=0;c<y;c++)
         {
           b=strcmp(du[c].category,inp);
           if(b==0)
           break;
          }
          if(b==0)
            du[c].remove();
           break;
          }
         case 6:
        if(y<=0)
         {ob.error1();
          break;}
        else
        {
          for(z=g;z<x;z++)
          {
            f2=f2+du[z];
            g++;
          }
        for(i=0;i<y;i++)
        du[i].catego_amount();
        f2.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
       case 3:
    for(i=0;;i++)
     {
       ob2.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(z>0)
         {
           cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONCE"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"How many Category do you want to Insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              ma[z].insert();
              ma[z].insert_ma();
               z++;
             }
          }
         break;
      case 2:
        if(z<=0)
        {ob2.error1();
        break;}
         else
         {
           cout<<"How many categories do you want to Add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             ma[z].add();
             ma[z].insert_ma();
              z++;
             }
          break;
          }
       case 3:
        if(z<=0)
        {ob2.error1();
        break;}
         else
         {
          for(s=0;s<z;s++)
           {
             ma[s].display();
             ma[s].display_ma();
           }
           break;
         }
       case 4:
        if(z<=0)
        {ob2.error1();
        break;}
        if(z>0)
        {
         cout<<"Enter your Desired category=";
         cin>>inp;
         for(c=0;c<z;c++)
         {
           b=strcmp(inp,ma[c].category);
           if(b==0)
           break;
          }
          if(b==0)
            {ma[c].search();
            ma[s].display_ma();}
           break;
          }
        case 5:
        if(z<=0)
        {ob2.error1();
          break;}
        else
        {
         cout<<"Enter your Desired category=";
         cin>>inp;
         for(c=0;c<z;c++)
         {
           b=strcmp(ma[c].category,inp);
           if(b==0)
           break;
          }
          if(b==0)
            ma[c].remove();
           break;
          }
         case 6:
        if(z<=0)
         {ob2.error1();
          break;}
        else
        {
          for(q=g;q<z;q++)
          {
            f3=f3+ma[q];
            g++;
          }
        for(i=0;i<z;i++)
        ma[i].catego_amount();
        f3.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
      }
      if(a1==0)
      break;
      }
       return 0;
     }
