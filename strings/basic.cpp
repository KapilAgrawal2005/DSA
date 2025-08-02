#include <iostream>
using namespace std;
int main()
{
    string s;
    // cin>>s;

    // getline(cin,s);
    // cout<<s<<endl;
    // cout<<s.size();

    // s.push_back('i');
    // cout<<s<<endl;
    // s.pop_back();

    // escape character

    // string r = "Kapil Agrawal is a \"good\" boy";
    // cout<<r;

    string k = "Kapil";

    int start = 0;
    int end = k.size() - 1;
    while (start <= end)
    {
        swap(k[start], k[end]);
        start++;
        end--;
    }
    cout << k << endl;

    int i = 0;
    for (i = 0; i < k.size(); i++)
    {
        if (k[i] == '\0')
        {
            break;
        }
    }
    cout << i << endl;

    start = 0;
    end = k.size() - 1;
    while (start <= end)
    {
        if (k[start] != k[end])
        {
            cout << "Not a palindrome" << endl;
            break;
        }
        start++;
        end--;
    }
}