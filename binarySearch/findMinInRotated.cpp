#include <bits/stdc++.h>
using namespace std;
int findMinInRotated(int a[], int n)
{
    int s = 0;
    int e = n - 1;
    int m = 0, ans = a[0];

    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] >= a[0])
        {
            s = m + 1;
        }
        else if (a[m] < a[0])
        {
            ans = a[m];
            e = m - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number : ";
        cin >> a[i];
    }
    cout << findMinInRotated(a, n);
}