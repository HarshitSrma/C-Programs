#include <stdio.h>
void changevalue(int *a)

{
  *a = 54 + 44;
}
void changevalueb(int *b)
{
  *b = 54 - 44;
}
int main()

{
  int a = 54, b = 44;
  printf("the value of a now is %d\n", a);
  printf("the value of b now is %d\n", b);
  changevalue(&a);
  printf("the value of a now is %d\n", a);
  changevalueb(&b);
  printf("the value of b now is %d\n", b);
  return 0;
}