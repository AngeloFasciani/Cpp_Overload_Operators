#include <iostream>
#include "Mystring.h"


int main(){


    Mystring empty;             // No-args constructor
    Mystring larry("Larry");    // Overloaded constructor
    Mystring stooge {larry};    // Copy constructor

    empty.display();
    larry.display();
    stooge.display();


    return 0;
}