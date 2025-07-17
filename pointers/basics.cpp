#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cout << "The number is : " << n << endl;

    int &num = n;
    cout << "The address of the n is : " << &num << endl;

    int *ptr = &num;
    *ptr += 1;
    cout << "The value of num is : " << num << endl
         << "The value of ptr is : " << *ptr<<endl;

    // bad practice
    // int *p;
    // cout<<"bad practice : "<<*p;

    // good practice
    // int *p = 0;
    // cout << "Good practice : " << *p;

    // copying a pointer
    // int *q = ptr;
    // cout<<q;
    
    
    // pointer arithmatics
    int i = 8;
    int *p = &i;
    cout<<"Value is " <<(*p)++<<endl;
    p+=5;
    cout<<*p;
}