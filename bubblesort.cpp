#include <iostream>
using namespace std;
template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
              swap(a[j], a[j - 1]);
}
   
// Driver Code
int main() {
    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);
     bubbleSort<int>(a, 5);
      cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
 float b[5] = {10.5, 50.6, 30.7, 40.6, 20.7};
    n = sizeof(b) / sizeof(b[0]);
   
    bubbleSort<float>(b, 5);
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
   return 0;
}