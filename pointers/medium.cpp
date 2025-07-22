#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {3,6,3};
    
    cout<<"The address of the first element of the array is : "<<arr<<endl;
    
    cout<<"The address of the first element of the array is : "<<&arr[0]<<endl;

    cout<< *arr<<endl;
    cout<<*(arr + 6)<<endl;

    // formula => arr[i] == *(arr + i);
    // formula => i[arr] == *(i + arr);
}