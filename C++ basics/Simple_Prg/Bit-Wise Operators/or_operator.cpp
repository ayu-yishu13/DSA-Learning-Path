/*
  0|0  -> 0
  0|1  -> 1
  1|0  -> 1  *symbol |
  1|1  -> 1 *atleast one 1 should be there

  Ex:  5|6
  5-> 101 , 6->110 
  Ans=>  111 -> 7
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;

    int c = a|b;
    cout << c;

}

