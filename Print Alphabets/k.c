#include <stdio.h>
void alphabet(int height)
{
    int row, col, width = (height - 2);

    for (row = 0; row < height; row++)
    {

        for (col = 0; col <= width; col++)

        {
            if (row == col + 3)
            {
                printf("*");
            }
            else if (col == (height - row) - 3)
            {
                printf("*");
            }
            else if (col == 0)
            {
                printf("*");
            }

            else

                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    int alp;
    printf("enter the height");
    scanf("%d", &alp);
    alphabet(alp);
    return 0;
}