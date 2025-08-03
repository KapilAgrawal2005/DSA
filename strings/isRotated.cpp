#include <bits/stdc++.h>
using namespace std;
string clockWiseRotated(string &s)
{
    char c = s[s.size() - 1];
    for (int i = s.size() - 1; i > 0; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = c;
    return s;
}

string antiClockWiseRotated(string &s)
{
    char c = s[0];
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = s[i + 1];
    }
    s[s.size() - 1] = c;
    return s;
}

bool isRotated(string &s1, string &s2)
{

    if (s1.size() != s2.size())
    {
        return 0;
    }

    string temp1 = s1;
    clockWiseRotated(temp1);
    clockWiseRotated(temp1);
    if (temp1 == s2)
    {
        return 1;
    }
    string temp2 = s1;
    antiClockWiseRotated(temp2);
    antiClockWiseRotated(temp2);
    if (temp2 == s2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    string s1, s2;
    cout << "enter twor strings." << endl;
    cout << "s1 = ";
    cin >> s1;
    cout << "s2 = ";
    cin >> s2;
    cout << isRotated(s1, s2);
    return 0;
}