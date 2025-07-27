#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    int start = 1;
    int end = x;
    long mid, ans;

    if (x == 0 || x == 1)
    {
        return x;
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int k;

    cout << "Enter the number : ";
    cin >> k;

    cout << mySqrt(k);
}