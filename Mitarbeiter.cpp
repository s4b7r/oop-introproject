#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "Mitarbeiter.h"
#include "Person.h"

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


void Mitarbeiter::print_me() {
    Person::print_me();
    printf("Einst. Jahr: %d\n", this->einst_jahr);
    printf("Geb. Jahr: %d\n", this->get_geb());
}