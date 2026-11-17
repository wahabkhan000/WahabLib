#pragma once
#ifndef OUTPUT_H
#define OUTPUT_H
#include "Types.h"
namespace CustomLib{
    
class Mycout{
    public:
    Mycout& operator<<(Int);
    Mycout& operator<<(Char);
    Mycout& operator<<(Bool);
    Mycout& operator<<(Float);
    Mycout& operator<<(Double);
    Mycout& operator<<(const Char*);
    Mycout& operator<<(const Int *);
    Mycout& operator<<(const Bool *);
    Mycout& operator<<(const Float *);
    Mycout& operator<<(const Double *);
};
extern Mycout Cout;
}
#endif