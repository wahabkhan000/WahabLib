#include "WahabLib.h"
CustomLib::Int main(){

    CustomLib::Int age = 20;
    CustomLib::Int age2 = 30;
    CustomLib::Cout<<CustomLib::isLesser(age,age2);
    CustomLib::Float marks = 12.34;
    CustomLib::Double percentage = 78.234;
    CustomLib::Bool flag = true;
    CustomLib::Char* String = new CustomLib::Char[12]{"Abdul Wahab"};
    CustomLib::Char character = 'A';
    CustomLib::Cout<<age<<" "<<marks<<" "<<percentage<<" "<<String<<" "<<character;


}