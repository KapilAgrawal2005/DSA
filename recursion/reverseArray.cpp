#include <iostream>
using namespace std;

void reverseArray(int a[], int n, int i)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(a[i], a[n - i - 1]);
    reverseArray(a, n, i + 1);
}

int main()
{
    int n;
    cout << "Enter the length of an array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element : ";
        cin >> a[i];
    }

    reverseArray(a, n, 0);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}