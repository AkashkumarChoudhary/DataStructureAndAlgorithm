#include<iostream>
using namespace std;

bool pallidrome (int n){
    int revNum = 0;
    int dup = n;
    while(n>0){
        int ld =    n % 10;
        revNum = (revNum * 10) + ld ;
        n = n/10;
    }

    if(dup == revNum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int number ;
    cin >> number;

    if(pallidrome(number)){
        cout<< number << " is Pallindrome" << endl;
    }else {
        cout<< number << " is not Pallindrome " << endl;
    }
    return 0;
}