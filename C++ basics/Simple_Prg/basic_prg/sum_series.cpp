#include<bits/stdc++.h>
using namespace std;

void num(int n)
{
    int sum = 0;
    for(int i=1; i<=n;i++)
    {
        sum = sum + i;
    }
    cout << sum;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    num(n);
}

/*
Output -> 55 if n is 10
*/
