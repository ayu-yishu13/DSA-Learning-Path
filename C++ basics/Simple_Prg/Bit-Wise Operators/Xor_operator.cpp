/*
  0|0  -> 0
  0|1  -> 1
  1|0  -> 1    *symbol -> ^
  1|1  -> 0    *if both same value then 0 

    Ex:  5^6
    5-> 101 , 6->110 
    Ans=>  011 -> 3
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;

    int c = a^b;
    cout << c;

}