#include <bits/stdc++.h>
using namespace std;
int num(char s){
    int val;
    switch(s){
        case 'I':
            val = 1;
            break;
        case 'V':
            val = 5;
            break;
        case 'X':
            val = 10;
            break;
        case 'L':
            val = 50;
            break;
        case 'C':
            val = 100;
            break;
        case 'D':
            val = 500;
            break;
        case 'M':
            val = 1000;
            break;
    }
    return val;
}
int romanToInt(string s) {
    int sum = 0;
    for(int i = 0; i<s.size()-1 ; i++){
        if(num(s[i]) >= num(s[i+1])){
            sum += num(s[i]);
        }
        else{
            sum -= num(s[i]); 
        }
    }
    sum += num(s[s.size()-1]);
    return sum;
}
int main()
{
    string s;
    cout << "enter the string : ";
    getline(cin, s);
    cout << romanToInt(s);
    return 0;
}