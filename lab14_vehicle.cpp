#include<iostream>
using namespace std;

class vehicle
{
	private:
		int registration_no;
		static int count;
		
	public:
		void setregistration()
		{
			cout<<"Enter the registration no"<<endl;
			cin>>registration_no;
		}
		
		void getregistration()
		{
			cout<<registration_no;
		}
		static void count1()
		{
			cout<<"the count is :"<<count<<endl;
		}
		
		vehicle()
		{
			cout<<"INSIDE THE CONST INCREMENTING COUNT"<<endl;
			count++;
			cout<<count;
		}
		
		~vehicle()
		{
			cout<<"INSIDE THE DESTR DECREMENTING COUNT"<<endl;
			count--;
			cout<<count;
		}	
};

int vehicle::count=0;
int main()
{
	vehicle v;
	v.setregistration();
	v.getregistration();
	vehicle::count1();
}