#include <bits/stdc++.h>
using namespace std;

void arrayEvenAndOdd(int arr[], int n)
{

    int i = -1, j = 0;
    int t;
    while (j != n)
    {
        if (arr[j] % 2 == 0)
        {
            i++;

            swap(arr[i], arr[j]);
        }
        j++;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 3, 2, 4, 7, 6, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    arrayEvenAndOdd(arr, n);
    return 0;
}