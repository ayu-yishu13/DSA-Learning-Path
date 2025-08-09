#include<bits/stdc++.h>
using namespace std;

void pattern18(int n)
{
    //space
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";

        }
           
    //alphabets
        char ch ='A';
        int breakpoint = (2*i + 1)/2;
        for(int j=1; j<=2*i + 1; j++)
        {
            cout << ch;
            if(j <= breakpoint) ch++;
            else  ch--;

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

    pattern18(n);
}