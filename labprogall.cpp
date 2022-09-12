1.1. #include<iostream>
using namespace std;
class personaldata
{
protected:
string ln;
string fn;
string add;
string city;
string state;
string phone;
public:
personaldata()
{
    ln='\0';
    fn='\0';
    add='\0';
    city='\0';
    state='\0';
    phone='\0';
}
void read()
{
cout<<"Enter the last name"<<endl;
cin>>ln;
cout<<"enter the first name"<<endl;
cin>>fn;
cout<<"Enter the add"<<endl;
cin>>add;
cout<<"Enter the city name"<<endl;
cin>>city;
cout<<"Enter the state name"<<endl;
cin>>state;
cout<<" Enter the phone np.";
cin>>phone;
cout<<endl;
}
void display()
{  
 cout<<"The first name is"<<fn<<endl;
cout<<"The last name"<<ln<<endl;
cout<<"The address is "<<add<<endl;
cout<<"the city is"<<city<<endl;
cout<<" the state is "<<state<<endl;
cout<<"phone no. is"<<phone<<endl;
}
};
class customerData : public personaldata
{
int customerNo;
char emailId[100];
public:
customerData()
{
    customerNo='\0';
   
    
}
void re()
{
cout<<"Enter the customerNo";
cin>>customerNo;
cout<<"Enter ur emailId"<<endl;
cin>>emailId;
}
void dis()
{
cout<<"The customerno. is"<<customerNo<<endl;
cout<<"EmailId is "<<emailId<<endl;
}
};
int main()
{
personaldata p1;
customerData c1;
p1.read();
p1.display();
c1.re();
c1.dis();
 
 
return 0;
}
 
2. #include<iostream>
using namespace std;
class person
{
    protected:
    char name[20];
    int age;
    public:
    person()
    {
        name[20]='\0';
        age=20;
    }
    void read1()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter age";
        cin>>age;
    }
    void display1()
    {
        cout<<"name :"<<name<<endl;
        cout<<"age: "<<age<<endl;
    }
};
class student : public virtual person
{
    protected:
    char usn[10];
    int marks;
    public:
    student()
    {
        usn[10]='\0';
        marks=0;
    }
    void read2()
    {
        cout<<"student details"<<endl;
        cout<<"enter usn of student";
        cin>>usn;
        cout<<"enter marks";
        cin>>marks;
    }
    void display2()
    {
        cout<<"usn:"<<usn<<endl;
        cout<<"name :"<<name<<endl;
    }
    };
    class faculty:public virtual person
    {
        protected:
        int facno;
        int exp;
   
    public:
    faculty()
    {
        facno=0;
        exp=0;
 
    }
    void read3()
    {
        cout<<"enter faculty details"<<endl;
        cout<<"enter faculty number";
        cin>>facno;
        cout<<"enter years of experince";
        cin>>exp;
    }
    void display3()
    {
        cout<<"faculty details"<<endl;
        cout<<"faculty number"<<facno<<endl;
        cout<<"years of experience="<<exp<<endl;
    }
    };
   
class TA: public student,public faculty
{
    protected:
    int hour;
    double salary;
    public:
    TA()
    {
        hour=0;
        salary=0;
    }
    void read4()
    {
        read1();
        read2();
        read3();
        cout<<"enter details of teaching assistant"<<endl;
        cout<<"enter working hours";
        cin>>hour;
        cout<<"enter salary";
        cin>>salary;
    }
    void display4()
    {
        display1();
        display2();
        display3();
        cout<<"details of teaching assistant"<<endl;
        cout<<"working hours"<<hour<<endl;
        cout<<"salary"<<salary<<endl;
    }
};
int main()
{
    TA s1;
    s1.read4();
    s1.display4();
    return 0;
}

3. #include<iostream>
using namespace std;
class ship
{
protected:
int year;
string name;
public:
ship()
{
name='\0';
year=0;
}
void read1()
{
cout<<"Enter ship details" <<endl;
cout<<"Enter Ship Name";
cin>>name;
cout<<"Enter year ship was built";
cin>>year;
}
virtual void print()
{
ship();
read1();
cout<<"Ship Name:"<<name<<endl;
cout<<"Year of manufacture"<<year<<endl;
}
};
class cruiseship: public ship
{
protected:
int max;
public:
cruiseship()
{
    name='\0';
    max=0;
}
void read2()
{
cout<<"Enter ship name";
cin>>name;
cout<<"Enter the maximum capacity of ship";
cin>>max;
}
void print()
{
cruiseship();
read2();
cout<< "Ship details"<<endl;
cout<<"Ship name "<<name<<endl;
cout<< "Maximum capacity of ship"<<max<<endl;
}
};
class cargoship:public ship
{
protected:
int capacity;
public:
cargoship()
{
capacity=0;
name='\0';
}
void read3()
{
cout<<"Enter ship Details"<<endl;
cout<<"Enter ship name";
cin>>name;
cout<<"Enter cargo capacity";
cin>>capacity;
}
void print ()
{
cargoship();
read3();
cout<<"Ship Details" <<endl;
cout<<"Ship name: "<<name<<endl;
cout<<" Cargo capacity: "<<capacity<<endl;
}
};
int main()
{
ship *sptr[10];
sptr[0]=new ship();
sptr[1]=new cruiseship();
sptr[2]=new cargoship();
for(int i=0;i<3;i++)
{
sptr[i]->print();
}
}
 
4.a
#include<iostream>
using namespace std;
template<class X>
class array{
private:
int capacity;
X *arr_ptr;
public:
array(){
capacity = 1;
arr_ptr = new X[capacity];
}
array(int n){
capacity =n;
arr_ptr = new X [capacity];
}
void input(){
for(int i=0; i<capacity; i++){
cout<<"Enter the "<<i+1<<"th data :";  cin>>arr_ptr[i];
}
}
void output(){
for(int i=0; i<capacity; i++){
cout<<"the "<<i+1<<"th data :"<<arr_ptr[i] <<endl;  }
}
X find_max(){
X max = arr_ptr[0];
for(int i=0; i<capacity; i++){
if (arr_ptr[i]>max)
max = arr_ptr[i];
}
return max;
}
X find_min(){
X min = arr_ptr[0];
for(int i=0; i<capacity; i++){
if (arr_ptr[i]<min)
min = arr_ptr[i];
}
return min;
}
 
array operator +(array &x){
array<X> res(capacity+x.capacity);
for(int i=0; i<capacity; i++){
res.arr_ptr[i] = arr_ptr[i];
}
for (int i = capacity; i < capacity + x.capacity; i++) {
res.arr_ptr[i] = x.arr_ptr[i-capacity];
}
return res;
}
};
int main(){
array<int> a(3);
a.input();
a.output();
cout<<"\nThe maximum value is: "<<a.find_max(); cout<<"\nThe minimum value is: "<<a.find_min(); array<int> b(2);
cout<<"\n2nd array\n";
b.input();
b.output();
array<int> res;
res = a+b;
res.output();
array <string> s1(2);
s1.input();
array <string> s2;
s2.input();
array <string> s3;
s3 = s1 +s2;
s3.output();
cout<<"MAX: "<<s3.find_max();
cout<<"MIN: "<<s3.find_min();
return 0;
}
 
4b
#include <iostream>
 
using namespace std;
 
template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
              swap(a[j], a[j - 1]);
}
int main()
{
int n, i;
cout<<"Enter no. of integers: "; cin>>n;
cout<<endl;
int a[n];
cout<<"Enter the integers\n"; for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Before sorting: ";
for(i=0;i<n;i++)
{
cout<<a[i]<<"";
}
bubbleSort<int>(a,5);
bubbleSort(a,5);
cout<<"\nAfter sorting: ";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
float b[10];
for(i=0;i<n;i++)
{
cin>>b[i];
}
cout<<"Before sorting: ";
for(i=0;i<n;i++)
{
cout<<a[i]<<"";
}
bubbleSort<float>(b,5);  bubbleSort(b,5);
cout<<"\nAfter sorting: ";
for(i=0;i<n;i++)
{
cout<<b[i]<<" ";
}
return(0);
}
 
5
#include<iostream>
using namespace std;
class EXPRESSION
{
    int d;
int a, b;
public:
void evaluate();
   void read_input(){
           cout << "Enter values of a,b, " << endl;
           cin >> a >> b ;
           evaluate();
   }
void display(){
       cout << "a : "<<a<< endl<<"b : " << b << endl;
       cout << "d : " << d << endl;
       cout << "The final EXPRESSION (a-b)/d is: " << (a-b)/d << endl;
}
};
void EXPRESSION :: evaluate()
{
cout << "Enter d: ";
cin>>d;
try{
   if(d == 0)
       throw(d);
   }
catch(int d)
{
   cout << "Divide by zero is not possible. Error. " << endl;
  evaluate();
}
}
int main()
{
EXPRESSION e;
e.read_input();
e.display();
return 0;
}