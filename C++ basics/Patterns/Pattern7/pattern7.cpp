#include<bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    //space
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";

        }
           
    //star
        for(int j=0; j<=i; j++)
        {
            cout << "* " ;
        }
           
    //space
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
               
    }

}

int main()
{
    int n;
    cout << "Enter the pattern n: ";
    cin >> n;

    pattern7(n);
}