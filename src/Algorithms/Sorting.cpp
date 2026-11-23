#include "../../Include/Wahab/Algorithms/Sorting.h"
#include "../../Include/Wahab/Core/Output.h"
namespace CustomLib
{
    void A_BubbleSort(Int *pointer, Int size)
    {
        if (!pointer)
            return;

        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(Float *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(Double *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(Char *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(U_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(L_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(LL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(Sh_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(UL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
    void A_BubbleSort(ULL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] > pointer[j + 1])
                {
                    Int copy = pointer[j];
                    pointer[j] = pointer[j + 1];
                    pointer[j + 1] = copy;
                    flag = true;
                }
            }
            if (!flag)
                break;
        }
    }
}
