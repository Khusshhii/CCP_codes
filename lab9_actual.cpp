#include<iostream>
using namespace std;

class ship
{
    protected:
        string name;
        int yr;
    public:
    ship()
    {}
        ship(string a, int b)
        {
            name  = a;
            yr = b;
        }

        void setname(string a)
        {
            name = a;
        }

        void setyear(int b)
        {
            yr = b;
        }

        string getname()
        {
            return name;
        }

        int getyear()
        {
            return yr;
        }
        virtual void print()
        {
            cout<<"Name: "<<name<<"\nYear of manufactured:"<<yr<<endl;
        }
};

class CruiseShip:public ship
{
    int max_p;
    public:
    CruiseShip(){}
        CruiseShip(string a, int b):ship(a, b)
        {
            max_p = 0;
        }
        void setmax(int b)
        {
            max_p = b;
        }
        int getmax(){
            return max_p;
        }
    void print(){
            cout<<"Name: "<<name<< "\nMaximum number of passengers: "<<max_p<<endl;
        }
};

class CargoShip:public ship
{
    int caps;
    public:
        CargoShip(string a, int b):ship(a, b)
        {
            caps = 0;
        }
        void setcapacity(int b){
            caps = b;
        }
        int getcapacity(){
            return caps;
        }
        void print(){
            cout<<"Name: "<<name<<"\nCargo Capacity:"<<caps<<endl;
        }
};

int main(){
    int m,n;
    cout<<"Enter total no of Cruiseship:";
    cin>>m;
    cout<<"enter total no of Cargoships:";
    cin>>n;
    ship *s[m+n];
    for(int i=0;i<m;i++){
        string name;
        int yr;
        int max;
        static int j=1;
        cout<<"Enter name  of "<< j<<" Cruiseship:";
        cin>>name;
        cout<<"Enter year at which ship"<<name<<" was built:";
        cin>>yr;
        cout<<"Enter maximum people that "<<name<<" can carry:";
        cin>>max;
        CruiseShip *c=new CruiseShip(name,yr);
        c->setmax(max);
        s[i]=c;
        j++;
    }
    for(int i=m;i<m+n;i++){
        string name;
        int yr;
        int caps;
       static  int j=1;
        cout<<"Enter name "<< j<<" of Cargoship:";;
        cin>>name;
        cout<<"Enter year at which cargoship " <<name<<" was built:";
        cin>>yr;
        cout<<"Enter maximum capacity of ship "<<name<<":";
        cin>>caps;
        CargoShip *ca=new CargoShip(name,yr);
        ca->setcapacity(caps);
        s[i]=ca;
        j++;
    }
    for(int i=0;i<m+n;i++)
    {
        s[i]->print();
    }
}