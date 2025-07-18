#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0};
    
    cout<<"The address of the first element of the array is : "<<arr<<endl;
    
    cout<<"The address of the first element of the array is : "<<&arr[0]<<endl;
}