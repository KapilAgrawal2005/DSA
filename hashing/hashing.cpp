#include <iostream>
using namespace std;

int count(int a[], int q, int n)
{
    // supposing the heighest number is 12
    int hash[12] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[a[i]] += 1;
    }
    return hash[q];
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cout << "enter the number to be searched" << endl;
    cin >> q;
    cout<<count(a, q, n);
}