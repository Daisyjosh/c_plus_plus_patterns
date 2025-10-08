#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = n; i > 0; i--)
    {
        char val = '*';
        for(int j = i; j > 0; j-- )
        // The inner loop runs i times every time it runs...
        {
            cout << val << " ";
        }
        cout << endl;
    }
    int n2;
    cout << "Enter another number: ";
    cin >> n2;
    for(int i = 1; i <= n2; i++)
    {
        for(int j = 1; j <= (n-i+1);j++)
        {
            cout << "* ";

        }
        cout << endl;
    }
}