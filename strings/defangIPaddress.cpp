#include <bits/stdc++.h>
using namespace std;
string defangIPaddr(string s) {
    string temp = "";
    for(int i = 0; i<s.size();i++){
        if(s[i] == '.'){
            temp = temp + "[.]";
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main()
{
    string s;
    cout<<"enter the combination : ";
    getline(cin,s);
    cout<<defangIPaddr(s);
    return 0;
}