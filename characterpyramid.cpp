#include <iostream>
using namespace std;
int main()
{
    // My version
    int n = 4, val = 65;
    
    for(int i = 1; i <= n; i++)
    {
        
        for(int j = 1; j <= i; j++)
        {
            char character = char(val);
            cout << character << " ";
            val += 1;
        }
        cout << endl;
    }
     // tutor version
     int n2 = 5;
     char ch = 'A';
     for(int i = 1; i <= n; i++)
     {
        for(int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;

        }
        cout << endl;

     }
    

}