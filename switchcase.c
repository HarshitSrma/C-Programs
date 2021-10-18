#include <stdio.h>
#include <conio.h>

int main()

{
    char input;
    float kmtomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokg = 0.453592;
    float inchestometers = 0.0254;
    float first, second;

    while (1)
    {
        printf("enter the input character\n     0. to quit\n     1. kmtomiles\n     2. inchestofoot \n     3. cmstoinches\n     4. poundtokg\n     5. inchestometers\n");
        scanf(" %c", &input);

        switch (input)
        {
        case '0':
            printf("Quiting the program...");
            goto end;
            break;

        case '1':
            printf("enter quantity in terms of first unit \n");
            scanf("%f", &first);
            second = first * kmtomiles;
            printf("%.2f km is equal to %.2f miles\n\n\n\n\n", first, second);
            break;

        case '2':
            printf("enter quantity in terms of first unit \n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%.2f inches is equal to %.2f foots\n\n\n\n\n", first, second);
            break;

        case '3':
            printf("enter quantity in terms of first unit \n");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%.2f cm is equal to %.2f inches\n\n\n\n\n", first, second);
            break;

        case '4':
            printf("enter quantity in terms of first unit \n");
            scanf("%f", &first);
            second = first * poundtokg;
            printf("%.2f pounds is equal to %.2f kg\n\n\n\n\n", first, second);
            break;

        case '5':
            printf("enter quantity in terms of first unit \n");
            scanf("%f", &first);
            second = first * inchestometers;
            printf("%.2f inches is equal to %.2f meters\n\n\n\n\n", first, second);
            break;

        default:
            printf("In default now");
            break;
        }
    }

end:
    return 0;
}