#include <iostream>
using namespace std;
int main()
{
    int r, s;
    cout<<"enter values of r and s";
    cin >> r >> s;
    int nos = r * s;
    int tickets;
    cout<<"enter tickets";
    cin >> tickets;
    if (nos >= tickets)
    {
        cout << tickets << " " << 0 << endl;
    }
    else
    {
        cout << nos << " " << (tickets - nos) << endl;
    }

    return 0;
}