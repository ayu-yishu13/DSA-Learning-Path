#include<bits/stdc++.h>
using namespace std;

void pattern12(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(char ch='A'; ch<='A' +i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

}

int main()
{
    int n;
    cout << "Enter the pattern n: ";
    cin >> n;

    pattern12(n);
}
