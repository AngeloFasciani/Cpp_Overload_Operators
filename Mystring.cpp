#include "Mystring.h"
#include <cstring>
#include <iostream>


// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str= new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char* s)
    : str{nullptr}{
    if (s==nullptr){
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str, s);
    }
    
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring(){
    delete [] str;
}

// Methods
void Mystring::display() const {

    std::cout << str << ":" << get_len() << std::endl;
}

int Mystring::get_len() const{
    return std::strlen(str);
}


const char* Mystring::get_str() const{
    return str;
}