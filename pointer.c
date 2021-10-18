#include <stdio.h>
int main()
{
    /*int a=100;
    int* ptra =&a;
    printf(" %d\n",ptra);
   printf(" %d\n",ptra+1);*/
    int arr[] = {122, 2, 3, 4, 5, 6, 7};
    printf("%d\n", arr[4]);
    printf("%d\n", &arr[0]);
    printf("the address of first element of the array is%d\n", &arr[0]);
    printf("the address of first element of the array is%d\n", arr);
    printf("the address of second element of the array is%d\n", &arr[1]);
    printf("the address of second element of the array is%d\n", arr + 1);
    printf("the address of third element of the array is%d\n", &arr[2]);
    printf("the address of third element of the array is%d\n", arr + 2);

    printf("the value at address of first element of the array is%d\n", *(&arr[0]));
    printf("the value at address of first element of the array is%d\n", arr[0]);
    printf("the value at  address of first element of the array is%d\n", *(arr));
    printf("the balue at address of second element of the array is%d\n", *(&arr[1]));
    printf("the value at address of second element of the array is%d\n", arr[1]);
    printf("the value at address of secondelement of the array is%d\n", *(arr + 1));
    return 0;
}