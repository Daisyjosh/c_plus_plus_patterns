#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++) // outer loop runs n times
    {
        for(int j =1; j <= n-i; j++)
        // first inner loop for spaces as it prints 0 to n-i times
        {
            cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++)
        // second inner loop for stars as we need (i + i - 1) number of stars when i = 1 we need 1 star when i = 2 (2+2-1) we need 3 stars so on...
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}