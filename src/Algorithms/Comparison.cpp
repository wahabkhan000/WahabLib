#include "..\..\Include\Wahab\Algorithms\Comparison.h"

CustomLib::Bool CustomLib::isEqual(Int lhs,Int rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(Float lhs,Float rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(Double lhs,Double rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(Char lhs,Char rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(const Char* lhs, const Char* rhs){
    if(!lhs || !rhs) return false;
    int len{};
    while(rhs[len] != '\0' && lhs[len] != '\0'){
        if(rhs[len] != lhs[len]) return false;
        ++len;
    }
    if(rhs[len] == lhs[len]) return true;
    return false;
}
CustomLib::Bool CustomLib::isEqual(U_Int lhs,U_Int rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(L_Int lhs,L_Int rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(LL_Int lhs,LL_Int rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(Sh_Int lhs,Sh_Int rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(UL_Int lhs,UL_Int rhs){
    return (lhs == rhs) ? true : false;
}
CustomLib::Bool CustomLib::isEqual(ULL_Int lhs,ULL_Int rhs){
    return (lhs == rhs) ? true : false;
}


CustomLib::Bool CustomLib::isGreater(Int lhs,Int rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(Float lhs,Float rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(Double lhs,Double rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(Char lhs,Char rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(U_Int lhs,U_Int rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(L_Int lhs,L_Int rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(LL_Int lhs,LL_Int rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(Sh_Int lhs,Sh_Int rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(UL_Int lhs,UL_Int rhs){
    return (lhs > rhs) ? true : false;
}
CustomLib::Bool CustomLib::isGreater(ULL_Int lhs,ULL_Int rhs){
    return (lhs > rhs) ? true : false;
}


CustomLib::Bool CustomLib::isLesser(Int lhs,Int rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(Float lhs,Float rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(Double lhs,Double rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(Char lhs,Char rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(U_Int lhs,U_Int rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(L_Int lhs,L_Int rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(LL_Int lhs,LL_Int rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(Sh_Int lhs,Sh_Int rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(UL_Int lhs,UL_Int rhs){
    return (lhs < rhs) ? true : false;
}
CustomLib::Bool CustomLib::isLesser(ULL_Int lhs,ULL_Int rhs){
    return (lhs < rhs) ? true : false;
}


CustomLib::Int CustomLib::Min(Int lhs,Int rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::Float CustomLib::Min(Float lhs,Float rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::Double CustomLib::Min(Double lhs,Double rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::Char CustomLib::Min(Char lhs,Char rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::U_Int CustomLib::Min(U_Int lhs,U_Int rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::L_Int CustomLib::Min(L_Int lhs,L_Int rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::LL_Int CustomLib::Min(LL_Int lhs,LL_Int rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::Sh_Int CustomLib::Min(Sh_Int lhs,Sh_Int rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::UL_Int CustomLib::Min(UL_Int lhs,UL_Int rhs){
    return (lhs < rhs) ? lhs : rhs;
}
CustomLib::ULL_Int CustomLib::Min(ULL_Int lhs,ULL_Int rhs){
    return (lhs < rhs) ? lhs : rhs;
}


CustomLib::Int CustomLib::Max(Int lhs,Int rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::Float CustomLib::Max(Float lhs,Float rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::Double CustomLib::Max(Double lhs,Double rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::Char CustomLib::Max(Char lhs,Char rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::U_Int CustomLib::Max(U_Int lhs,U_Int rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::L_Int CustomLib::Max(L_Int lhs,L_Int rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::LL_Int CustomLib::Max(LL_Int lhs,LL_Int rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::Sh_Int CustomLib::Max(Sh_Int lhs,Sh_Int rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::UL_Int CustomLib::Max(UL_Int lhs,UL_Int rhs){
    return (lhs > rhs) ? lhs : rhs;
}
CustomLib::ULL_Int CustomLib::Max(ULL_Int lhs,ULL_Int rhs){
    return (lhs > rhs) ? lhs : rhs;
}