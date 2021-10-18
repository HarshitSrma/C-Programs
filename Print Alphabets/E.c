#include <stdio.h>
void alphabet(int height)
{
    int row, col;

    for (row = 0; row < height; row++)
    {

        for (col = 0; col < height - 1; col++)

        {
            if ()
            {
                printf("*");
            }
            else if (row == 0 || row == height - 1 || row == height / 2)

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