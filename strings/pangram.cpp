#include <bits/stdc++.h>
using namespace std;
bool checkIfPangram(string &s)
{
    int a[26] = {0};
    if (s.size() < 26)
    {
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    cout << "enter the strings.";
    getline(cin, s);
    cout << checkIfPangram(s);
    return 0;
}