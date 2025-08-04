#include<bits/stdc++.h>
using namespace std;

void pattern8(int n)
{
    for(int i=0; i<n; i++)
    {
        //space
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

    
    for(int i=0; i<n; i++)
    {
        //space
        for(int j=0; j<i; j++)
        {
            cout << " ";

        }
           
        //star
        for(int j=i; j<=n-1; j++)
        {
            cout << "* " ;
        }
           
        //space
        for(int j=0; j<i; j++)
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

    pattern8(n);
}
