#include <bits/stdc++.h>
using namespace std;
void firstAndLastOccurance(int a[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid, first = -1, last = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (a[mid] == k)
        {
            first = mid;
            end = mid - 1;
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

    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (a[mid] == k)
        {
            last = mid;
            start = mid + 1;
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

    cout << first << " ";
    cout << last;
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

    firstAndLastOccurance(a, n, k);
}