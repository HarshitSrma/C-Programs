#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int takenumber()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c, d;
    a = 5;
    b = 6;
    c = sum(a, b);
    d = takenumber();
    printf("the sum is %d\n", c);
    printstar(7);
    printf("\n the number is %d\n", d);
}