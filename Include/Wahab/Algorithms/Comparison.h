#pragma once
#ifndef COMPARISON_H
#define COMPARISON_H
#include "../Core/Types.h"
namespace CustomLib{
// For Equal Check
Bool isEqual(Int,Int);
Bool isEqual(Float,Float);
Bool isEqual(Double,Double);
Bool isEqual(Char,Char);
Bool isEqual(const Char*, const Char*);
Bool isEqual(U_Int,U_Int);
Bool isEqual(L_Int,L_Int);
Bool isEqual(LL_Int,LL_Int);
Bool isEqual(Sh_Int,Sh_Int);
Bool isEqual(UL_Int,UL_Int);
Bool isEqual(ULL_Int,ULL_Int);

// For Greater Check
Bool isGreater(Int,Int);
Bool isGreater(Float,Float);
Bool isGreater(Double,Double);
Bool isGreater(Char,Char);
Bool isGreater(U_Int,U_Int);
Bool isGreater(L_Int,L_Int);
Bool isGreater(LL_Int,LL_Int);
Bool isGreater(Sh_Int,Sh_Int);
Bool isGreater(UL_Int,UL_Int);
Bool isGreater(ULL_Int,ULL_Int);

// For Smaller Check
Bool isLesser(Int,Int);
Bool isLesser(Float,Float);
Bool isLesser(Double,Double);
Bool isLesser(Char,Char);
Bool isLesser(U_Int,U_Int);
Bool isLesser(L_Int,L_Int);
Bool isLesser(LL_Int,LL_Int);
Bool isLesser(Sh_Int,Sh_Int);
Bool isLesser(UL_Int,UL_Int);
Bool isLesser(ULL_Int,ULL_Int);

// For Min Check
Int Min(Int,Int);
Float Min(Float,Float);
Double Min(Double,Double);
Char Min(Char,Char);
U_Int Min(U_Int,U_Int);
L_Int Min(L_Int,L_Int);
LL_Int Min(LL_Int,LL_Int);
Sh_Int Min(Sh_Int,Sh_Int);
UL_Int Min(UL_Int,UL_Int);
ULL_Int Min(ULL_Int,ULL_Int);

// For Max Check
Int Max(Int,Int);
Float Max(Float,Float);
Double Max(Double,Double);
Char Max(Char,Char);
U_Int Max(U_Int,U_Int);
L_Int Max(L_Int,L_Int);
LL_Int Max(LL_Int,LL_Int);
Sh_Int Max(Sh_Int,Sh_Int);
UL_Int Max(UL_Int,UL_Int);
ULL_Int Max(ULL_Int,ULL_Int);

}
#endif