#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(int x) {
        long long dup = x ;
        long long revNum= 0;
        while(x>0){
            int last= x%10;
             revNum = (revNum * 10 ) + last ;
             x = x /10; 
        }
        return( revNum == dup );
    }