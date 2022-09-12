#include <iostream>
using namespace std;

class student{
    char usn[10];
    int m[6][3];
    char name[20];
    public:
     void read()
     {
         cout<<"Enter name\n";
          cin>>name;
         cout<<"Enter USN\n";
          cin>>usn;
         cout<<"Enter marks for 3 subjects and 3 tests\n";
         for(int i=0;i<3;i++)
          {
              cout<<"Enter subject for "<<i+1<<"\n";
              for(int j=0;j<3;j++)
            {
              cin>>m[i][j];
            }
         }        
     }
     
     void display()
     {
         int avg;
         
         
         cout<<usn<<"    "<<name<<"        ";
         calculate();
         
         
         
     }
     
     void calculate()
     {
         int avg;
         
         for(int i=0;i<3;i++)
         {
             if(m[i][0]<=m[i][1] && m[i][0]<=m[i][2])
              {
                  avg=(m[i][1]+m[i][2])/2;
              }
              else if(m[i][1]<=m[i][0] && m[i][1]<=m[i][2])
              {
                  avg=(m[i][0]+m[i][2])/2;
              }
              else
              {
                  avg=(m[i][1]+m[i][2])/2;
              }
              cout<<avg<<"    ";
         }
         
     }
};



int main() {

    student s[4];
    for(int i=0;i<4;i++)
     {
     cout<<"Enter details for STUDENT "<< i+1<<"\n";
     s[i].read();
     }
    cout<<"USN        NAME        S1    S2    S3\n";
    for(int j=0;j<4;j++)
     {
      s[j].display();
      cout<<"\n";
     }
     
     
    return 0;
}



/*
#include<iostream>
using namespace std;

struct student
{
	char USN[10];
	int marks[6][3];
	char name[20];
	int high1[6];
	int high2[6];
	float avg[6];
	public:
	void get();
	void display();
	void calculate();
};
void student::get()
{
	cout<<endl<<"enter the USN and name";
	cin>>USN>>name;
	for(int i=0;i<6;i++)
	{
	for(int j=0;j<3;j++)
	cin>>marks[i][j];
	}
}
void student::calculate()
{
	
	for(int i=0;i<6;i++)
	{
		high1[i]=marks[i][0];
		
		for(int j=0;j<3;j++)
		{
		    if(marks[i][j]>high1[i])
		    high1[i]=marks[i][j];
		}
	}
	for(int i=0;i<6;i++)
	{
		high2[i]=0;
		for(int j=0;j<3;j++)
		{
			if(marks[i][j]>high2[i] && marks[i][j]<high1[i])
			{
			high2[i]=marks[i][j];
			}
		}
	}
	for(int i=0;i<6;i++)
	{
		avg[i]=(high1[i]+high2[i])/2.0;
	}
}
void student::display()
{
	cout<<endl<<"details are:";
	cout<<endl<<"		"<<"USN"<<"\t"<<"name"<<"\t"<<"average";
	cout<<endl<<"		"<<USN<<"\t"<<name;
	cout<<endl<<"Sub-1"<<"\t"<<marks[0][0]<<"\t"<<marks[0][1]<<"\t"<<marks[0][2]<<"\t"<<avg[0];
	cout<<endl<<"Sub-2"<<"\t"<<marks[1][0]<<"\t"<<marks[1][1]<<"\t"<<marks[1][2]<<"\t"<<avg[1];
	cout<<endl<<"Sub-3"<<"\t"<<marks[2][0]<<"\t"<<marks[2][1]<<"\t"<<marks[2][2]<<"\t"<<avg[2];
	cout<<endl<<"Sub-4"<<"\t"<<marks[3][0]<<"\t"<<marks[3][1]<<"\t"<<marks[3][2]<<"\t"<<avg[3];
	cout<<endl<<"Sub-5"<<"\t"<<marks[4][0]<<"\t"<<marks[4][1]<<"\t"<<marks[4][2]<<"\t"<<avg[4];
	cout<<endl<<"Sub-6"<<"\t"<<marks[5][0]<<"\t"<<marks[5][1]<<"\t"<<marks[5][2]<<"\t"<<avg[5];
	
	//cout<<endl<<"marks of student in 6 subjects for 3 tests";
	for(int i=0;i<6;i++)
	{
		
		for(int j=0;j<3;j++)
		cout<<"\t"<<marks[i][j];
		cout<<endl;
	}
	cout<<endl<<"first highest and second highest in each subject";
	for(int i=0;i<6;i++)
	cout<<"  "<<high1[i];
	cout<<endl;
	for(int i=0;i<6;i++)
	cout<<"  "<<high2[i];
		    
}		
int main()
{
	struct student s1;
	s1.get();
	s1.calculate();
	s1.display();
}

*/
