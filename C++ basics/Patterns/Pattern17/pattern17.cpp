#include<bits/stdc++.h>
using namespace std;

void pattern17(int n)
{

 
    for(int i=1; i<=n; i++)
    {
        int hmm = 2*i;
        //star
        for(int j=1; j<=i;j++)
        {
            cout << "*";
        }

        //space
        for(int j=1; j<=2*n -hmm; j++)
        {
            cout << " ";
        }

        //star
        for(int j=1; j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;       
    }

    int count =2;
    for(int i=1; i<=n-1; i++)
    {
        //star      
        for(int j=0; j<n-i;j++)
        {
            cout << "*";
        }
        //space
        for(int j=0; j<count; j++)
        {
            cout << " ";
        }
        //star
        for(int j=0; j<n-i;j++)
        {
            cout << "*";
        }
        cout << endl;
        count = count +2;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    pattern17(n);

}
