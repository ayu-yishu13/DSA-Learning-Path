#include<bits/stdc++.h>
using namespace std;

void pattern13(int n)
{
    char ch = 'A';
    for(int i=1; i<=n; i++)
    {
        for(int  j= 0; j<i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch = ch + 1;
    }

}

int main()
{
    int n;
    cout << "Enter the pattern n: ";
    cin >> n;

    pattern13(n);
}
