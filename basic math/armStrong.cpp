#include <bits/stdc++.h>
using namespace std;
bool armstrong(int n)
{
    int temp = n, count = 0, x = 0;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    int y = n;
    while (y > 0)
    {
        x = x + pow((y % 10), count);
        y = y / 10;
    }
    if (n == x)
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
    cout << armstrong(n);
}