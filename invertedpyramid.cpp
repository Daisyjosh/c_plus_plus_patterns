#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = n; i > 0; i--)
    {
        for(int j = 1; j <= n-i;j++)
        {
            cout << " ";
        }
        for(int j = 2*i-1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}