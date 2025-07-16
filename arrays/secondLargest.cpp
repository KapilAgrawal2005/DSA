#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                swap(nums[i], nums[j]);
            }
        }
    }
    if (nums[0] == nums[n - 1])
    {
        return -1;
    }
    int i = n - 1;
    while (nums[i] == nums[i - 1])
    {
        i -= 1;
    }
    return nums[i - 1];
}
int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element : ";
        cin >> a[i];
    }
    cout << secondLargestElement(a, n);
    return 0;
}