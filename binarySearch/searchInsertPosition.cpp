#include <bits/stdc++.h>
using namespace std;
int searchInsertPosition(int a[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    int n, k;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number : ";
        cin >> a[i];
    }

    cout << "Enter the number that you want to search : ";
    cin >> k;

    cout << searchInsertPosition(a, n, k);
}