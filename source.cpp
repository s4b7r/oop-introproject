#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Jetzt auch Mitarbeiter:
struct mitarbeiter
{
    char name[40];
    int einst_jahr; // Jahr der Einstellung
    int geb_jahr; // Geburtsjahr
};

struct student
{
    char name[40];
    int matnr;
    int imatjahr;
    char sgang[20];
    int geb_jahr;
};

int main(int argc, char ** argv)
{
    struct student student;
    struct mitarbeiter mitarbeiter;

    printf("Name: ");
    scanf("%s", student.name);
    printf("Mat Nr: ");
    scanf("%d", &student.matnr);
    printf("Imat. Jahr: ");
    scanf("%d", &student.imatjahr);
    printf("Studiengang: ");
    scanf("%s", &student.sgang);
    printf("Geb. Jahr: ");
    scanf("%d", &student.geb_jahr);

    printf("\n\n");

    printf("Name: %s\n", student.name);
    printf("Mat Nr: %d\n", student.matnr);
    printf("Imat. Jahr: %d\n", student.imatjahr);
    printf("Studiengang: %s\n", student.sgang);
    printf("Geb. Jahr: %d\n", student.geb_jahr);

    printf("\n\n");

    printf("Name: ");
    scanf("%s", mitarbeiter.name);
    printf("Einst. Jahr: ");
    scanf("%d", &mitarbeiter.einst_jahr);
    printf("Geb. Jahr: ");
    scanf("%d", &mitarbeiter.geb_jahr);

    printf("\n\n");

    printf("Name: %s\n", mitarbeiter.name);
    printf("Einst. Jahr: %d\n", mitarbeiter.einst_jahr);
    printf("Geb. Jahr: %d\n", mitarbeiter.geb_jahr);

    system("pause");

    return 0;
}