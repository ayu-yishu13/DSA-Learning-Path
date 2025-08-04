#include<bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int i = 0; i <n; i++) //Outer loop
    {
        for(int j = 0; j<n; j++) //inner loop
        {
            cout << "* " << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "this is pattern1: ";
    cin >> n;

    pattern1(n);
}