#include<bits/stdc++.h>
using namespace std;

void checkprime(int n)
{
    bool isBool = 0;
    for(int i=2; i<n;i++)
    {
        if(n%i==0)
        {
            isBool =1;
            break;
        }
    }

    if( isBool ==0)
    {
        cout << "It is a Prime" << endl;
    }
    else
    {
        cout << "It is not  a Prime" << endl ;
    }

}

int main()
{
    int n;
    cout << "Enter the number u want check prime: ";
    cin >> n;

    checkprime(n);
}