/*
  0|0  -> 0
  0|1  -> 0
  1|0  -> 0    *symbol -> &
  1|1  -> 1    *both should be 1 

    Ex:  5&6
    5-> 101 , 6->110 
    Ans=>  100 -> 4
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;

    int c = a&b;
    cout << c;

}