#include <iostream>
using namespace std;
 
int main()
{
    int i;

    int arr[5];
    arr[0] = 1;
    arr[2] = -2;
 
    arr[1 + 1] = 3;
    arr[3] = arr[0];
    arr[-4] = 0;
 
     for (i = 0; i < 5; i++)
        cout << "Address arr[" << i << "] is " << &arr[i] << "\n";

    return 0;
}