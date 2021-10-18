#include <stdio.h>
#include <string.h>

typedef struct details
{
    char name[30];
    char DLno[30];
    char route[30];
    int kms[30];

} de;
int main()

{
    int n;
    printf("Enter the number of drivers\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        de d1;
        if (n > 0)
        {

            printf("Enter the name of driver no %d\n ", i);
            scanf("%s", &d1.name);

            printf("Enter the driving licence no. of driver no %d\n ", i);
            scanf("%s", &d1.DLno);

            printf("Enter the route of driver no %d\n ", i);
            scanf("%s", &d1.route);

            printf("Enter the distance covered in kms of driver no %d\n ", i);
            scanf("%d", &d1.kms);
        }
        else
        {
            printf("Program end");
        }
    }
    for (int i = 1; i <= n; i++)
    {
        de d1;
        printf("Name of driver %d is %s\n", i, d1.name);
        printf("Driving Licence no. is %s\n", d1.DLno);
        printf("Route is %s\n", d1.route);
        printf("Distance covered is %d\n", d1.kms);
    }

    return 0;
}
