#include <stdio.h>

int main()
{
    int i, num;

    printf(" Enter the no. you wnat to multication table of\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, 1, num * i);
    }
    return 0;
}