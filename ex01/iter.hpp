#include <ostream>
#include <iostream>

template <typename U>
void iter(U *tableau, int len, void (*f)(U))
{
    int i = 0;
    while (i<len)
    {
        f(tableau[i]);
        i++;
    }

}

template <typename U>
void print(U a)
{
    std :: cout << a << std ::endl;
}