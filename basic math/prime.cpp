#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    cout << prime(n);
}