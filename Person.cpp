#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Person.h"

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