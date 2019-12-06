#pragma once

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
