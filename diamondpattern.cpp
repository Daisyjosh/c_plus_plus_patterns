#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    //pyramid
    for(int i =1; i<= n; i++) // outer loop
    {
        //spaces and first inner loop
        for(int j = 1; j<= n-i; j++)
        {
            cout << " ";

        }
        for(int j = 1; j <= 2*i-1; j++) //stars and second inner loop
        {
            cout << "*";
        }
        cout << endl;
    }
    //inverted pyramid
    for(int i = n; i > 0;i--)
    {
        //first inner loop and for spaces
        for(int j = 1; j<=n-i; j++)
        {
            cout << " ";
        }
        //second inner loop and for stars
        for(int j = 2*i-1; j>0; j--)
        {
            cout << "*";
        }
        cout << endl;
    
        
    }

    return 0;
}