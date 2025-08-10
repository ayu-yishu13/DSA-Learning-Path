#include<bits/stdc++.h>
using namespace std;

void evenodd(int n)
{
    if(n%2 == 0)
    {
        cout << "value is even";
    }
    else
    {
        cout << "Value is odd";
    }
}

int main()
{
    int n;

    cout << "Enter value of n: ";
    cin >> n;


    evenodd(n);

}