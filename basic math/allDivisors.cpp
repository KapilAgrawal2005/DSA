#include <iostream>
using namespace std;
void divisors(int n)
{
    int temp = n;
    for (int i = 1; i <= temp; i++)
    {
        if (temp % i == 0)
            cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    divisors(n);
}