#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >>n;
    for(int i = 1;i <= n;i++)
    {
        //star
        for(int j = 1; j<= i; j++)
        {
            cout << "*";
        }
        //spaces
        for(int j = 1; j <= 2*(n-i);j++)
        {
            cout << " ";
        }
        //star
        for(int j = 1;j<=i;j++)
        {
            cout << "*";

        }
        cout << endl;
    }
}