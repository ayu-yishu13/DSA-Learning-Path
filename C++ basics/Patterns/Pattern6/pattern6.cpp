#include<bits/stdc++.h>
using namespace std;

void pattern6(int n)
{
    int count = 1;
    for(int i = 0; i <=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout << count  << " ";
            count++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "this is pattern6: ";
    cin >> n;

    pattern6(n);
}
