#include "iter.hpp"

int main(int argc, char **argv)
{
    iter(argv, argc, print);
    int tableau[10] = {1, 5, 6, 7, 8, 7, 9, 9,0,20};
    iter(tableau, 10, print);
    return (0);
}