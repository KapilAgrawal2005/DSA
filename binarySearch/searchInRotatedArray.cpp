#include <bits/stdc++.h>
using namespace std;
int search(int nums[], int n, int target)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > nums[0] && nums[0] > target)
        {
            start = mid + 1;
        }
        else if (nums[mid] == nums[0] && nums[mid] != target)
        {
            start = mid + 1;
        }
        else if (nums[mid] < target && nums[mid] > nums[0])
        {
            start = mid + 1;
        }
        else if (nums[mid] < target && target < nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
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
    int k;
    cout << "Enter the number that you want to search";
    cin >> k;
    cout << search(a, n, k);
}