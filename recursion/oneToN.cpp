#include <iostream>
using namespace std;

void printNumbers(int n)
{
    if (n<1)
    {
        return;
    }
    printNumbers(n-1);
    cout << n;
}

int main()
{
    int n;
    cout << "Enter the count number :";
    cin >> n;
    printNumbers(n);
    return 0;
}