#include<bits/stdc++.h>
using namespace std;
 int evenlyDivides(int N){
        //code here
        int originalN = N;
        int cnt =0 ;
        while(N>0){
            int lastdigit = N% 10;
            if(lastdigit != 0 && originalN % lastdigit == 0){
                cnt++;
            }
            N =N /10;
        }
        return cnt;
    }