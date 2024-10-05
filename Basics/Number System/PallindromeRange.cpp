#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int revNum =0;
    int temp = n;
    while(temp>0){
        revNum = (revNum*10) + temp %10;
        temp = temp/10;
    }
    if(n == revNum ) return true;
    else return false;
}

int main (){
    int min ;
    int max ;
    cin >> min >> max ;
    for(int i = min ; i<= max; i++){
        if(isPalindrome(i)){
            cout<< i <<  " ";
        }
        else {
           cout<<  i << "none";
        }
    }
    return 0;
    
}