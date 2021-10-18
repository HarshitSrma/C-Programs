
#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
} ram, shyam, subh;

int main()
{
    //  nstruct student ram, shyam,subh;
    ram.id = 1;
    shyam.id = 2;
    subh.id = 3;
    ram.marks = 499;
    shyam.marks = 733;
    subh.marks = 533;
    /*ram.fav_char='p';
    shyam.fav_char='p';
    subh.fav_char='p';*/
    strcpy(ram.name, "ram potter");
    strcpy(shyam.name, "shyam singh");
    strcpy(subh.name, "subh kumar ");
    printf("ram's id is  %d \n", ram.id);
    printf("ram got %d marks\n", ram.marks);
    printf("ram's name is : %s\n", ram.name);
    printf("shyam's id is  %d \n", shyam.id);
    printf("shyam got %d marks \n", shyam.marks);
    printf("shyam's name is : %s\n", shyam.name);
    printf("subh's id is  %d \n", subh.id);
    printf("subh got %d marks \n", subh.marks);
    printf("subh's name is : %s\n", subh.name);

    return 0;
}