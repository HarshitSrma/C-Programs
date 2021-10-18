#include <stdio.h>
int b = 34;

int fun1(int b1)
{
    static int myvar = 0;
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    printf("The address of b inside fun1 is %d\n", b);
    printf("The address of b inside fun1 is %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b = 324;
    printf("The address of b inside main is %d\n", &b);
    int val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    int *ptr = &val;
    // printf("the value of fun1 is %d",val);
    return 0;
}
