#include <iostream>
using namespace std;

int main()
{
    int arr[10]={120,167,180,194,365,987,754,654,230,696};
    int i,num,*ptr;
    ptr=arr;
    cout<<"Enter element to search"<<endl;
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(*ptr==num)
        {
            cout<<"Found at pos "<<i;
            break;
        }
        else if(i==9)
        cout<<"Not found"<<endl;
        ptr++;
    }
   
    return 0;
}