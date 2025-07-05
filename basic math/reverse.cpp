#include<iostream>
using namespace std;
int reverse(int n){
    int temp = n, rev = 0;
    while(temp>0){
        rev = rev*10+temp%10;
        temp = temp/10;
    }
    return rev;
}

int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<reverse(n);
}