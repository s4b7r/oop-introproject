#pragma once

#include "Person.h"

class Student : public Person
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
