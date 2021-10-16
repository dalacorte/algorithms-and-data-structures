#include <stdio.h>
 
int main()
{
    int i;

    int arr[] = { 1, 2, 3, 4, 5 };

    int arr2[5] = { 1, 2, 3, 4, 5 };

    int arr3[5];
    arr3[0] = 1;
    arr3[1] = -2;
    arr3[1 + 1] = 3;
    arr3[3] = arr3[0];
    arr3[-4] = 0;

    for (i = 0; i < 5; i++)
        printf("Address arr[%d] is %p\n", i, &arr[i]);
 
    return 0;
}