#include <stdio.h>
#include <stdlib.h>
int main()

    // calloc

    int *ptr;
int n;
printf("enter the size of the array you wants to creat\n");
scanf("%d", &n);
ptr = (int *)calloc(n, sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("enter the value no. %d of the array\n", i);
    scanf("%d", &ptr[i]);
}
for (int i = 0; i < n; i++)
{
    printf("the value of %d of this array is %d \n ", i, ptr[i]);
}

// realloc

printf("enter the size of the new  array you wants to creat\n");
scanf("%d", &n);
ptr = (int *)realloc(ptr, n * sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("enter the value no. %d of the array\n", i);
    scanf("%d", &ptr[i]);
}
for (int i = 0; i < n; i++)
{
    printf("the new value of %d of this array is %d \n ", i, ptr[i]);
}
free(ptr);
return 0;
}
* /
