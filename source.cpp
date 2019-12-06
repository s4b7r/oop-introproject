#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Person
{
public:
    int get_geb();

protected:
    int geb_jahr;
};

class Mitarbeiter: public Person
{
public:
    char name[40];
    int einst_jahr;

    void set_geb(int input);
};

class Student: public Person
{
public:
    char name[40];
    int matnr;
    int imatjahr;
    char sgang[20];

    void set_geb(int input);
};

int main(int argc, char ** argv)
{
    Student student;
    Mitarbeiter mitarbeiter;

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
    student.set_geb(input);

    printf("\n\n");

    printf("Name: %s\n", student.name);
    printf("Mat Nr: %d\n", student.matnr);
    printf("Imat. Jahr: %d\n", student.imatjahr);
    printf("Studiengang: %s\n", student.sgang);
    printf("Geb. Jahr: %d\n", student.get_geb());

    printf("\n\n");

    printf("Name: ");
    scanf("%s", mitarbeiter.name);
    printf("Einst. Jahr: ");
    scanf("%d", &mitarbeiter.einst_jahr);
    printf("Geb. Jahr: ");
    scanf("%d", &input);
    mitarbeiter.set_geb(input);

    printf("\n\n");

    printf("Name: %s\n", mitarbeiter.name);
    printf("Einst. Jahr: %d\n", mitarbeiter.einst_jahr);
    printf("Geb. Jahr: %d\n", mitarbeiter.get_geb());

    system("pause");

    return 0;
}

void Student::set_geb(int input)
{
    this->geb_jahr = input;
    if (this->geb_jahr > this->imatjahr) {
        printf("Das macht keinen Sinn!\n");
        system("pause");
        exit(-1);
    }
}

void Mitarbeiter::set_geb(int input)
{
    this->geb_jahr = input;
    if (this->geb_jahr > this->einst_jahr) {
        printf("Das macht keinen Sinn!\n");
        system("pause");
        exit(-1);
    }
}

int Person::get_geb()
{
    return this->geb_jahr;
}