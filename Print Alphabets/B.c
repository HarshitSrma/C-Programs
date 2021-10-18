#include <stdio.h>
void alphabet(int height)
{
    int row, col, width = (height - 2);

    for (row = 0; row < height; row++)
    {
        printf("*");

        for (col = 0; col < width; col++)

        {
            if ((row == 0 || row == height / 2 || row == height - 1) && col < width - 1)
            {
                printf("*");
            }
            else if ((col == width - 1) && !(row == 0 || row == height / 2 || row == height - 1))

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