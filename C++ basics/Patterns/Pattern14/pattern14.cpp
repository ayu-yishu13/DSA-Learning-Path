#include<bits/stdc++.h>
using namespace std;

void pattern14(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout << "*" << " ";

        }
        cout << endl;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout << "*" << " ";

        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    pattern14(n);
    
}

    
