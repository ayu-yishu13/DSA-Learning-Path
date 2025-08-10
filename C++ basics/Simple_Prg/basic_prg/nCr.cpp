#include<bits/stdc++.h>
using namespace std;

int  factorial(int a)
{
    int prod =1;
    for(int i=a; i>=1; i--)
    {
        prod = prod * i;
    }

    return prod;
}

int nCr(int n , int r)
{
    return factorial(n) / (factorial(r)*factorial(n-r));
}

int main()
{
    int n;
    int r;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    int answer = nCr(n,r);
    cout << "Answer is: " << answer << endl;
}

