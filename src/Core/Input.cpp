#include "../../Include/Wahab/Core/Input.h"
#include<iostream>
CustomLib::Mycin& CustomLib::Mycin::operator>>(Int &value){
    std::cin>>value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Bool &value){
    std::cin>>value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Float &value){
    std::cin>>value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Double &value){
    std::cin>>value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Char &value){
    std::cin>>value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Int *value){
    if(!value) return *this;
    std::cin>>*value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Float *value){
    if(!value) return *this;
    std::cin>>*value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Double *value){
    if(!value) return *this;
    std::cin>>*value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Bool *value){
    if(!value) return *this;
    std::cin>>*value;
    return *this;
}
CustomLib::Mycin& CustomLib::Mycin::operator>>(Char *value){
    if(!value) return *this;
    Char temp[10000];
    std::cin>>temp;
    int len = 0;
    while(temp[len] != '\0'){++len;}
    value = new Char[len];
    --len;
    while(len>=0){
        value[len] = temp[len];
        --len;
    }
    return *this;
}

CustomLib::Mycin CustomLib::Cin;