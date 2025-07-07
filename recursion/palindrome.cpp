#include <iostream>
using namespace std;

bool palindrome(string a, int i, int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (a[i] != a[n - i - 1])
    {
        return false;
    }
    return palindrome(a, n, i + 1);
}

int main()
{
    string a;
    cout << "Enter a string : ";
    cin >> a;
    int n = a.size();
    cout << palindrome(a, 0, n);
}