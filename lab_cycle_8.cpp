#include<iostream>
using namespace std;

class person
{
    public:
        int age;
        char name[10];
        void read_person()
        {
            cout<<"ENTER THE AGE OF THE PERSON"<<endl;
            cin>>age;
           
            cout<<"ENTER THE NAME OF THE PERSON"<<endl;
            cin>>name;
        }
        void display_person()
        {
            cout<<"THE AGE OF THE PERSON IS"<<endl;
            cout<<age<<endl;
           
            cout<<"THE NAME OF THE PERSON IS"<<endl;
            cout<<name<<endl;
        }
};

class student: virtual public person
{  
    private:
    char USN[10];
    public:
    void read_student()
    {
        cout<<"ENTER THE USN OF THE STUDENT"<<endl;
            cin>>USN;
    }
    void display_student()
    {
        cout<<"THE USN OF THE STUDENT"<<endl;
        cout<<USN<<endl;
    }
};

class faculty: virtual public person
{  
    private:
    char department[10];
    public:
    void read_faculty()
    {
        cout<<"ENTER THE DEPARTMENT OF THE FACULTY"<<endl;
            cin>>department;
    }
    void display_faculty()
    {
        cout<<"THE DEPARTMENT OF THE FACULTY"<<endl;
        cout<<department<<endl;
    }
};

class TA:public faculty,public student
{  
    private:
    int scholorship;
    public:
    void read_TA()
    {
        cout<<"ENTER THE scholorship OF THE TA"<<endl;
            cin>>scholorship;
    }
    void display_TA()
    {
       
        cout<<"THE scholorship OF THE STUDENT"<<endl;
        cout<<scholorship<<endl;
    }
};

int main()
{
    TA t;
    t.read_person();
    t.display_person();
    t.read_student();
    t.display_person();
    t.display_student();
    t.display_student();
    t.read_faculty();
    t.display_person();
    t.display_faculty();
    t.read_TA();
    t.display_person();
    t.display_TA();
    return 0;
}
