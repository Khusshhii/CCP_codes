#include<iostream>
#include<vector>
using namespace std;
template<class T>
void BubbleSort(T arr[], int n)
{
for(int i=0;i<n-1;++i){
for(int j=0;j<n-i-1;++j){
if(arr[j]>arr[j+1]){
T temp = arr[j+1];
arr[j+1] = arr[j];
arr[j] = temp;
}
}
}
}
template<class T>
void PrintArray(T arr[], int n)
{
for (int i = 0; i < n; ++i)
cout << arr[i] << " ";
cout << "\n\n";
}
template<class T>
void max(T arr[],int n,T &l)
{
int i;
for(i=0;i<n;i++)
{
if(arr[i]>l)
l=arr[i];
}
}
template<class T>
void min(T arr[],int n, T &s)
{
int i;
for(i=0;i<n;i++)
{
if(arr[i]<s)
s=arr[i];
}
}
int main()
{
int arr[] = { 1, 10, 11, 9,2, 20, 19 };
int n = sizeof(arr) / sizeof(int);
cout << "Array Before Sorting: " << endl;
PrintArray(arr, n);
BubbleSort(arr, n);
int large=arr[0];
max(arr,n,large);
cout<<endl<<"largest: "<<large;
int small=arr[0];
min(arr,n,small);
cout<<endl<<"small: \n"<<small;
cout << "Array After Sorting: " << endl;
PrintArray(arr, n);
float ar[] = { 6.2,1.0,2.24 };
n = sizeof(ar) / sizeof(float);
cout << "Array Before Sorting: " << endl;
PrintArray(ar, 3);
BubbleSort(ar, 3);
float lar=ar[0];
max(ar,n,lar);
cout<<endl<<"largest: "<<lar;
float smal=ar[0];
min(ar,n,smal);
cout<<endl<<"small:"<<smal;
cout << "Array After Sorting: " << endl;
PrintArray(ar, 3);
}