#include <stdlib.h>
#include <stdio.h>

#include "Student.h"
#include "Mitarbeiter.h"

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