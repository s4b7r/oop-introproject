#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct mitarbeiter
{
    char name[40];
    int einst_jahr;
    int geb_jahr;
};

struct student
{
    char name[40];
    int matnr;
    int imatjahr;
    char sgang[20];
    int geb_jahr;
};

void set_mitarbeiter_geb(struct mitarbeiter * mitarbeiter, int input);
void set_student_geb(struct student * student, int input);

int main(int argc, char ** argv)
{
    struct student student;
    struct mitarbeiter mitarbeiter;

    int input;

    printf("Name: ");
    scanf("%s", student.name);
    printf("Mat Nr: ");
    scanf("%d", &student.matnr);
    printf("Imat. Jahr: ");
    scanf("%d", &student.imatjahr);
    printf("Studiengang: ");
    scanf("%s", &student.sgang);
    printf("Geb. Jahr: ");
    scanf("%d", &input);
    set_student_geb(&student, input);

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
    scanf("%d", &input);
    set_mitarbeiter_geb(&mitarbeiter, input);

    printf("\n\n");

    printf("Name: %s\n", mitarbeiter.name);
    printf("Einst. Jahr: %d\n", mitarbeiter.einst_jahr);
    printf("Geb. Jahr: %d\n", mitarbeiter.geb_jahr);

    system("pause");

    return 0;
}

void set_student_geb(struct student * student, int input)
{
    student->geb_jahr = input;
    if (student->geb_jahr > student->imatjahr) {
        printf("Das macht keinen Sinn!\n");
        system("pause");
        exit(-1);
    }
}

void set_mitarbeiter_geb(struct mitarbeiter * mitarbeiter, int input)
{
    mitarbeiter->geb_jahr = input;
    if (mitarbeiter->geb_jahr > mitarbeiter->einst_jahr) {
        printf("Das macht keinen Sinn!\n");
        system("pause");
        exit(-1);
    }
}