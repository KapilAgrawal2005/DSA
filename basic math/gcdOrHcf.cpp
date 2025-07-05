#include <bits/stdc++.h>
using namespace std;
int gcdOrHcf(int n1, int n2)
{
    int it, maxi;
    if (n1 > n2 && n1 % n2 == 0)
    {
        return n2;
    }
    else if (n2 > n1 && n2 % n1 == 0)
    {
        return n1;
    }
    if (n1 < n2)
    {
        it = n1;
    }
    else
    {
        it = n2;
    }
    for (int i = 1; i <= it / 2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            maxi = i;
        }
    }
    return maxi;
}

int main()
{
    int n1, n2;
    cout << "Enter two number";
    cin >> n1 >> n2;
    cout << gcdOrHcf(n1, n2);
}