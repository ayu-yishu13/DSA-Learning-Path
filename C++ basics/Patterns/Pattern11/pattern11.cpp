#include<bits/stdc++.h>
using namespace std;

void pattern11(int n)
{
    char alpha = 'A';
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout << alpha << " ";
            alpha = alpha +1;
        }
        cout << endl;
    }

}

int main()
{
    int n;
    cout << "Enter the pattern n: ";
    cin >> n;

    pattern11(n);
}
