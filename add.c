#include <stdio.h>
int main()
{
    int a = 34, b = 56;
    printf("Enter two number you wants to add\n");
    scanf("%d %d", &a, &b);
    printf("sum of %d and %d is %d", a, b, a + b);
    return 0;
}