#include<bits/stdc++.h>
using namespace std;

void countprime(int start , int end)
{
    for (int num = start; num <= end; num++) {
        if (num < 2) cout << "Enter valid num"; // skip numbers less than 2
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) 
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << endl;
    }

}

int main()
{
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;

    countprime(start, end);
}

/*
Output:
Enter starting number: 40
Enter ending number: 50
Prime numbers between 40 and 50 are: 
41
43
47
*/