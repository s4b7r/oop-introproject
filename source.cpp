#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Person
{
public:
    void fill_me();
    void print_me();
    int get_geb();

protected:
    char name[40];
    int geb_jahr;
};

class Mitarbeiter: public Person
{
public:
    void fill_me();
    void print_me();
    void set_geb(int input);

private:
    int einst_jahr;
};

class Student: public Person
{
public:
    void fill_me();
    void print_me();
    void set_geb(int input);

private:
    int matnr;
    int imatjahr;
    char sgang[20];
};

int main(int argc, char ** argv)
{
    Student student;
    Mitarbeiter mitarbeiter;

    student.fill_me();
    printf("\n\n");
    student.print_me();
    printf("\n\n");
    mitarbeiter.fill_me();
    printf("\n\n");
    mitarbeiter.print_me();

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

void Student::fill_me()
{
    int input;

    Person::fill_me();
    printf("Mat Nr: ");
    scanf("%d", &this->matnr);
    printf("Imat-> Jahr: ");
    scanf("%d", &this->imatjahr);
    printf("Studiengang: ");
    scanf("%s", &this->sgang);
    printf("Geb. Jahr: ");
    scanf("%d", &input);
    this->set_geb(input);
}

void Student::print_me()
{
    Person::print_me();
    printf("Mat Nr: %d\n", this->matnr);
    printf("Imat. Jahr: %d\n", this->imatjahr);
    printf("Studiengang: %s\n", this->sgang);
    printf("Geb. Jahr: %d\n", this->get_geb());
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

void Mitarbeiter::fill_me()
{
    int input;

    Person::fill_me();
    printf("Einst-> Jahr: ");
    scanf("%d", &this->einst_jahr);
    printf("Geb. Jahr: ");
    scanf("%d", &input);
    this->set_geb(input);
}

void Mitarbeiter::print_me()
{
    Person::print_me();
    printf("Einst. Jahr: %d\n", this->einst_jahr);
    printf("Geb. Jahr: %d\n", this->get_geb());
}

int Person::get_geb()
{
    return this->geb_jahr;
}

void Person::fill_me()
{
    printf("Name: ");
    scanf("%s", this->name);
}

void Person::print_me()
{
    printf("Name %s\n", this->name);
}