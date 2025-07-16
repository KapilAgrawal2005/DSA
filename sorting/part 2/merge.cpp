#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &a, int low, int high, int mid)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (a[left] > a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] == temp[i - low];
    }
    
}

void mergeSort(vector<int> &a, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;

    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    merge(a, low, high, mid);
}
int main()
{
    int n;
    cout << "Enter the elements in the array : ";
    cin >> n;
    vector<int> a;
    int val;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a number : ";
        cin >> val;
        a.push_back(val);
    }
    mergeSort(a, 0, n - 1);
}