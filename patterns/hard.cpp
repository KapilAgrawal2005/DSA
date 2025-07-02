#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k > i + 1; k--)
        {
            cout << "*";
        }
        for (int l = n - 1; l >= i; l--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0 && i % 2 == 0)
            {
                cout << "1";
            }
            else if (j % 2 == 1 && i % 2 == 1)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int l = i; l > 0; l--)
        {
            cout << l;
        }
        cout << endl;
    }

    // combined one program
    //  for(int i=0; i<n;i++){
    //      for(int j = n;j>i;j--){
    //          cout<<"*";
    //      }
    //      for(int k =0; k<=2*i-1;k++){
    //          cout<<" ";
    //      }
    //      for(int l = n; l>i;l--){
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }

    // for(int i=0; i<n;i++){
    //     for(int j = 0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int k =0; k<2*(n-i-1);k++){
    //         cout<<" ";
    //     }
    //     for(int l = 0; l<=i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // combined one program
    // for(int i=0; i<n;i++){
    //     for(int j = 0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int k =0; k<2*(n-i-1);k++){
    //         cout<<" ";
    //     }
    //     for(int l = 0; l<=i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<n;i++){
    //     for(int j = n;j>i;j--){
    //         cout<<"*";
    //     }
    //     for(int k =0; k<=2*i-1;k++){
    //         cout<<" ";
    //     }
    //     for(int l = n; l>i;l--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n || j == 1 || i == n || i == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}