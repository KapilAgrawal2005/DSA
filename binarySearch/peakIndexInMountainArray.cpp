#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(int arr[], int n)
{
    int s = 0, e = n - 1, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return s;
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

    cout << peakIndexInMountainArray(a, n);
}