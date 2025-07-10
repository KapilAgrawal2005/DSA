#include <iostream>
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

    for (int i = n - 1; i > 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}