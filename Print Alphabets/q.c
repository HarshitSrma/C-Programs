#include <stdio.h>
void alphabet(int height)
{
    int row, col, width = (height - 2);

    for (row = 0; row < height; row++)
    {
        for (col = 0; col <= width; col++)

        {
            if ((col == 0 || col == width) && !(row == height - 1))
            {
                printf("*");
            }
            else if (row == 0 || row == height - 2)
            {
                printf("*");
            }

            else if (((row == height - 3) && (col == width - 2)) || ((row == height - 4) && (col == width - 3)) || ((row == height - 1) && (col == width)))
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