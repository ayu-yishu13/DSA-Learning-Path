#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int a = 0;
    int b =1;
    cout << a << endl << b << endl;

    for(int i = 0; i<n;i++)
    {
        int next  = a + b;
        cout <<  next << endl;
        a =b ;
        b= next;
    }
}


//Output:
/*
0
1
1
2
3
5
8
13
21
34
55
89
*/

// if n =10