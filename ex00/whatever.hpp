#include <ostream>
#include <iostream>

template <typename U>
U min(U a, U b)
{
    if (a > b)
        return (b);
    return (a);
}


template <typename U>
U max(U a, U b)
{
    if (a > b)
        return (a);
    return (b);
}

template <typename U>
void swap(U &a, U &b)
{
    U tmp;
    tmp = a;
    a = b;
    b = tmp;
}

