#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "Student.h"
#include "Person.h"

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

void Student::print_me() {
    Person::print_me();  
    printf("Mat Nr: %d\n", this->matnr);
    printf("Imat. Jahr: %d\n", this->imatjahr);
    printf("Studiengang: %s\n", this->sgang);
    printf("Geb. Jahr: %d\n", this->get_geb());
}