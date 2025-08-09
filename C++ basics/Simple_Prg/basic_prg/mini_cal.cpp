#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    char op;
    cout << "Enter the operations: ";
    cin >> op;

    int c;

    switch(op)
    {
        case '+':
            c= (a+b);
            cout << c;
            break;

        case '-':
            c= (a-b);
            cout << c;
            break;

        case '*':
            c= (a*b);
            cout << c;
            break;

        case '/':
            c= (a/b);
            cout << c;
            break;

        case '%':
            c= (a%b);
            cout << c;
            break;
    }
}
