#pragma once
#ifndef INPUT_H
#define INPUT_H
#include "Types.h"
namespace CustomLib{

class Mycin{
    public:
    Mycin& operator>>(Int &);
    Mycin& operator>>(Char &);
    Mycin& operator>>(Bool &);
    Mycin& operator>>(Float &);
    Mycin& operator>>(Double &);
    Mycin& operator>>(Int *);
    Mycin& operator>>(Char *);
    Mycin& operator>>(Bool *);
    Mycin& operator>>(Float *);
    Mycin& operator>>(Double *);
};
extern Mycin Cin;
}
#endif