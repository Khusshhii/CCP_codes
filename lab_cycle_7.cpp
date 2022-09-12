#include<iostream>
#include<string.h>
using namespace std;

class PersonData
{
    public:
    char lastname[9];
    char firstname[10];
    char address[30];
    char city[10];
    char state[10];
    long long int phone;

    PersonData()
    {
        strcpy(lastname,"defname");
        strcpy(firstname,"defname");
        strcpy(address,"default");
        strcpy(city,"defcity");
        strcpy(state,"defstate");
        this->phone=0000;
    }

    void setdata()
    {
        cout<<"ENTER THE LASTNAME \n";
        cin>>lastname;
        cout<<"ENTER THE firstname \n";
        cin>>firstname;
        cout<<"ENTER THE address \n";
        cin>>address;
        cout<<"ENTER THE city \n";
        cin>>city;
        cout<<"ENTER THE state \n";
        cin>>state;
        cout<<"ENTER THE phone";
        cin>>phone;
    }

    void getdata()
    {
        cout<<"THE LASTNAME \n";
        cout<<lastname<<"\n";
        cout<<"THE firstname \n";
        cout<<firstname<<"\n";
        cout<<"THE address \n";
        cout<<address<<"\n";
        cout<<"THE city \n";
        cout<<city<<"\n";
        cout<<"THE state \n";
        cout<<state<<"\n";
        cout<<"THE phone";
        cout<<phone<<"\n";
    }
};

class CustomerData:public PersonData
{
    public:
    int customerNumber;
    char emailis[15];

    CustomerData()
    {
        this->customerNumber=0000;
        strcpy(emailis,"defmail");
        //this->emailis="emailis@123.com";
    }

    void set_datader()
    {
        cout<<"ENTER THE customerNumber \n";
        cin>>customerNumber;
        cout<<"ENTER THE emailiD \n";
        cin>>emailis;
    }

    void get_datader()
    {
        cout<<"THE customerNumber is : \n";
        cout<<customerNumber<<"\n";
        cout<<"THE emailiD is : \n";
        cout<<emailis<<"\n";
    }
};

int main()
{
    CustomerData objder;
    objder.setdata();
    objder.getdata();
    objder.set_datader();
    objder.get_datader();
}