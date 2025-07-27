#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
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
    return -1;
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

    cout << "The elements has been found at index at : " << binarySearch(a, n, k);
}