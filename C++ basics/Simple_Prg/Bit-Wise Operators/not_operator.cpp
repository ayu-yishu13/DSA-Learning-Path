/*
To get not operator ->  Symbol -> ~
Find 1's compliment and then 2'nd compliment
For 1's compliment reverse the binary digits of number 
then 2'nd operator add 1 in the end of binary digit.

Ex: Not operator of 2 
    2 is 0000.....10
    ~2 is 1111.....01 (reverse)
    1's compliment is reverse of ~2 is 0000......10
    2'nd compliment is 0000.....11
    ans => -3
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2;
    
    int c = ~a;
    cout << c;

}