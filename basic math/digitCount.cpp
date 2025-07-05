#include <iostream>
using namespace std;
int digitCount(int n)
{
    int temp = n, count = 0;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    cout << digitCount(n);
}