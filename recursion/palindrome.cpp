#include <iostream>
using namespace std;

bool palindrome(string a, int i)
{
    if (i >= a.size())
    {
        return true;
    }
    if (a[i] != a[a.size() - i - 1])
    {
        return false;
    }
    return palindrome(a, i + 1);
}

int main()
{
    string a;
    cout << "Enter a string : ";
    cin >> a;
    cout << palindrome(a, 0);
}