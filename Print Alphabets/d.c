
#include <stdio.h>
void alphabet(int height)
{
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col <= height - 2; col++)
        {
            if (col == 0)
            {
                printf("*");
            }
            else if ((row == 0 || row == height - 1) && (col != height - 2))
            {
                printf("*");
            }
            else if ((col == height - 2) && !(row == 0 || row == height - 1))
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
