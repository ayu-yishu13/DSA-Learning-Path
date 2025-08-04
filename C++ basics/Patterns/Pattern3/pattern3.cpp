#include<bits/stdc++.h>
using namespace std;

void pattern3(int n)
{
    for(int i = 0; i <n; i++)
    {
        for(int j = i ; j<=n-1; j++)
        {
            cout << "* " << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "this is pattern3: ";
    cin >> n;

    pattern3(n);
}