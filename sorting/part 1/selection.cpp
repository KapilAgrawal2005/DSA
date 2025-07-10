#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the elements in the array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a number : ";
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }
    cout << "The Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}