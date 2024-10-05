#include<bits/stdc++.h>
using namespace std;

bool armstrong (int n){
    int dup = n;
    int sum = 0;
    while (n>0)
    {
      int  lastdigit = n% 10;
      sum = sum + (lastdigit* lastdigit*lastdigit);
      n = n /10;  
    }

    if(sum == dup ) return true;
    else false;
}