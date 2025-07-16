#include <bits/stdc++.h>
using namespace std;

int largestElement(int nums[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > temp)
        {
            temp = nums[i];
        }
    }
    return temp;
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
    cout << largestElement(a, n);
    return 0;
}