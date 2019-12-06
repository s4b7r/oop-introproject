#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[40];
    int matnr;
    int imatjahr; // Jahr der Immatrikulation
    char sgang[20];
};

int main(int argc, char ** argv)
{
    struct student student;

    printf("Name: ");
    scanf("%s", student.name);
    printf("Mat Nr: ");
    scanf("%d", &student.matnr);
    printf("Imat. Jahr: ");
    scanf("%d", &student.imatjahr);
    printf("Studiengang: ");
    scanf("%s", &student.sgang);

    printf("\n\n");

    printf("Name: %s\n", student.name);
    printf("Mat Nr: %d\n", student.matnr);
    printf("Imat. Jahr: %d\n", student.imatjahr);
    printf("Studiengang: %s\n", student.sgang);

    system("pause");

    return 0;
}