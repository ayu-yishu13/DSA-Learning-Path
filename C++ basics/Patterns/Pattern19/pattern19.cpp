#include<bits/stdc++.h>
using namespace std;

void pattern19(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j =1; j<=n; j++)
        {
            char ch ='A'+i+j-2;
            cout << ch<< " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    pattern19(n);

}