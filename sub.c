#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number you wants to subtract\n");
    scanf("%d %d", &a, &b);
    printf("Difference of %d and %d is %d", a, b, a - b);
    return 0;
}