#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << "****"<<endl;
        
    }
    
    for(int i = n; i >= 1; i--)
    {
        cout<<i<<endl;
    }
    return 0;
}
