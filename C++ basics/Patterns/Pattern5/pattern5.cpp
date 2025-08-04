#include<bits/stdc++.h>
using namespace std;

void pattern5(int n)
{
    for(int i = 0; i <=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout << j  << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "this is pattern5: ";
    cin >> n;

    pattern5(n);
}
