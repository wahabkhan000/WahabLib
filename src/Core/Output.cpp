#include "../../Include/Wahab/Core/Output.h"
#include<iostream>

CustomLib::Mycout& CustomLib::Mycout::operator<<(Int value){
    std::cout<<value;
    return *this;
};
CustomLib::Mycout& CustomLib::Mycout::operator<<(Float value){
    std::cout<<value;
    return *this;
}
CustomLib::Mycout& CustomLib::Mycout::operator<<(Double value){
    std::cout<<value;
    return *this;
}
CustomLib::Mycout& CustomLib::Mycout::operator<<(Bool value){
    std::cout<<value;
    return *this;
}
CustomLib::Mycout& CustomLib::Mycout::operator<<(Char value){
    std::cout<<value;
    return *this;
}
CustomLib::Mycout& CustomLib::Mycout::operator<<(const Char* value){
    if(!value) return *this;
    std::cout<<value;
    return *this;
}
CustomLib::Mycout& CustomLib::Mycout::operator<<(const Int* value){
    if(!value) return *this;
    std::cout<<value;
    return *this;
}
CustomLib::Mycout& CustomLib::Mycout::operator<<(const Float* value){
    if(!value) return *this;
    std::cout<<value;
    return *this;
}
CustomLib::Mycout& CustomLib::Mycout::operator<<(const Double * value){
    if(!value) return *this;
    std::cout<<value;
    return *this;
}
CustomLib::Mycout& CustomLib::Mycout::operator<<(const Bool* value){
    if(!value) return *this;
    std::cout<<value;
    return *this;
}
CustomLib::Mycout CustomLib::Cout;