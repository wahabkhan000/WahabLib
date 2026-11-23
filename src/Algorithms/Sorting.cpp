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
void D_BubbleSort(Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(Float *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(Double *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(Char *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(U_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(L_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(LL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(Sh_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(UL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
    void D_BubbleSort(ULL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Bool flag = false;
            for (Int j = 0; j < size - i - 1; j++)
            {
                if (pointer[j] < pointer[j + 1])
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
void A_SelectionSort(Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(Float *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(Double *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(Char *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(U_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(L_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(LL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(Sh_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(UL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void A_SelectionSort(ULL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] < pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
void D_SelectionSort(Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(Float *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(Double *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(Char *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(U_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(L_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(LL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(Sh_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(UL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
    void D_SelectionSort(ULL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 0; i < size - 1; i++)
        {
            Int Index = i;
            for (Int j = i + 1; j < size; j++)
            {
                if (pointer[j] > pointer[Index])
                {
                    Index = j;
                }
            }
            if (Index != i)
            {
                Int copy = pointer[i];
                pointer[i] = pointer[Index];
                pointer[Index] = copy;
            }
        }
    }
void D_InsertionSort(Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(Float *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(Double *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(Char *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(U_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(L_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(LL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(Sh_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(UL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
    void D_InsertionSort(ULL_Int *pointer, Int size)
    {
        if (!pointer)
            return;
        for (Int i = 1; i < size; i++)
        {
            Int key = pointer[i];
            Int j = i - 1;
            while (j >= 0 && pointer[j] < key)
            {
                pointer[j + 1] = pointer[j];
                j--;
            }
            pointer[j + 1] = key;
        }
    }
}
