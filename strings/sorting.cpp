#include <bits/stdc++.h>
using namespace std;
string sorting(string &s) {
    int a[26]={0};
    string temp = "";
    int count = 0, c = 0;
    for(int i =0; i<s.size();i++){
        a[s[i] - 'a']+=1;
    }
    for (int i = 0; i<26;i++){
        while(a[i]){
            temp += 'a' +i;
            a[i]--;
        }
    }
    return temp;
}
int main()
{
    string s;
    cout<<"enter the strings.";
    getline(cin,s);
    cout<<sorting(s);
    return 0;
}