#include "WahabLib.h"
using namespace CustomLib;
Int main()
{

    Int age = 20;
    Int age2 = 30;
    Float marks = 12.34;
    Double percentage = 78.234;
    Bool flag = true;
    Char *String = new Char[12]{"Abdul Wahab"};
    Char character = 'A';

    Cout << isLesser(age, age2);

    Cout << age << " " << marks << " " << percentage << " " << String << " " << character << " ";

    Int arr[10]{11, 2, 4, 76, 45, 123, 435, 765, 7, 564};

    // Cout<<RBSearch(arr,8,0,9);

    D_InsertionSort(arr, 10);

    for (Int i{}; i < 10; i++)
    {
        Cout << arr[i] << " ";
    }

    A_InsertionSort(arr, 10);

    for (Int i{}; i < 10; i++)
    {
        Cout << arr[i] << " ";
    }
}
