#pragma once

#include "Person.h"

class Mitarbeiter : public Person
{
public:
    void fill_me();
    void print_me();
    void set_geb(int input);

private:
    int einst_jahr;
};
