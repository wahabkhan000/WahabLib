#include "../../Include/Wahab/Algorithms/Searching.h"
#include "../../Include/Wahab/Core/Output.h"
namespace CustomLib
{
    Int LSearch(const Int *pointer, Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const Float *pointer, Float value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const Double *pointer, Double value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const Char *pointer, Char value)
    {
        if (!pointer)
            return -1;

        for (Int i{}; pointer[i] != '\0'; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    Int LSearch(const U_Int *pointer, U_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const U_Int *pointer, L_Int value, Int size)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const U_Int *pointer, LL_Int value, Int size)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const U_Int *pointer, Sh_Int value, Int size)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const U_Int *pointer, UL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const U_Int *pointer, ULL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    Int LSearch(const L_Int *pointer, U_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const L_Int *pointer, L_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const L_Int *pointer, LL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const L_Int *pointer, Sh_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const L_Int *pointer, UL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const L_Int *pointer, ULL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    Int LSearch(const LL_Int *pointer, U_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const LL_Int *pointer, L_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const LL_Int *pointer, LL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const LL_Int *pointer, Sh_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const LL_Int *pointer, UL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const LL_Int *pointer, ULL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    Int LSearch(const Sh_Int *pointer, U_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const Sh_Int *pointer, L_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const Sh_Int *pointer, LL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const Sh_Int *pointer, Sh_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const Sh_Int *pointer, UL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const Sh_Int *pointer, ULL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    Int LSearch(const UL_Int *pointer, U_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const UL_Int *pointer, L_Int value, Int size)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const UL_Int *pointer, LL_Int value, Int size)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const UL_Int *pointer, Sh_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const UL_Int *pointer, UL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const UL_Int *pointer, ULL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    Int LSearch(const ULL_Int *pointer, U_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const ULL_Int *pointer, L_Int value, Int size)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const ULL_Int *pointer, LL_Int value, Int size)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const ULL_Int *pointer, Sh_Int value, Int size)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const ULL_Int *pointer, UL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    Int LSearch(const ULL_Int *pointer, ULL_Int value, Int size)
    {
        if (!pointer)
            return -1;

        for (Int i{}; i < size; i++)
        {
            if (pointer[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    Int BSearch(const Int *pointer, Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const Float *pointer, Float value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const Double *pointer, Double value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const Char *pointer, Char value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const U_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const U_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const U_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const U_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const U_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const U_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const L_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const L_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const L_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const L_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const L_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const L_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const LL_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const LL_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const LL_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const LL_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const LL_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const LL_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    Int BSearch(const Sh_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const Sh_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const Sh_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const Sh_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const Sh_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const Sh_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    Int BSearch(const UL_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const UL_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const UL_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const UL_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const UL_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const UL_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    Int BSearch(const ULL_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const ULL_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const ULL_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const ULL_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const ULL_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }

        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    Int BSearch(const ULL_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        Int mid{};
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (pointer[mid] == value)
                return mid;
            else if (pointer[mid] < value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    Int RBSearch(const Int *pointer, Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const Float *pointer, Float value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const Double *pointer, Double value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const Char *pointer, Char value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }

    Int RBSearch(const U_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const U_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const U_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const U_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const U_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const U_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }

    Int RBSearch(const L_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const L_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const L_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const L_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const L_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const L_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }

    Int RBSearch(const LL_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const LL_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const LL_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const LL_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const LL_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const LL_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }

    Int RBSearch(const Sh_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const Sh_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const Sh_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const Sh_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const Sh_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const Sh_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }

    Int RBSearch(const UL_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const UL_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const UL_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const UL_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const UL_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const UL_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }

    Int RBSearch(const ULL_Int *pointer, U_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const ULL_Int *pointer, L_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const ULL_Int *pointer, LL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const ULL_Int *pointer, Sh_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (value < 0)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const ULL_Int *pointer, UL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
    Int RBSearch(const ULL_Int *pointer, ULL_Int value, Int start, Int end)
    {
        if (!pointer)
            return -1;
        if (start < 0 || end < 0)
        {
            Cout << "Start or End is Negative\n";
            return -1;
        }
        if (start > end)
            return -1;
        Int mid = start + (end - start) / 2;
        if (pointer[mid] == value)
            return mid;
        else if (pointer[mid] < value)
            return RBSearch(pointer, value, mid + 1, end);
        else
            return RBSearch(pointer, value, start, mid - 1);
    }
}
