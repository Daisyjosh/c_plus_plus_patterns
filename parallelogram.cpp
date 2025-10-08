#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = n;i >0; i--)
    {
        for(int j = 1; j<=i-1;j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= 5; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}