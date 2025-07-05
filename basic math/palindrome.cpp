#include<iostream>
using namespace std;
int palindrome(int n){
    int temp = n, rev = 0;
    if(temp<0) return false;
    while(temp>0){
        rev = rev *10 + temp %10;
        temp = temp/10;
    }
    if(n == rev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<palindrome(n);
}