#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstddef>

template <typename T>
class Array 
{
    private:
        unsigned int len; 
        T* tableau;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array(const Array &src);
        int size() const;
        T &operator[](unsigned int indice);
        Array<T> &operator=(const Array<T>& src);
        class	OutOfBoundsException	:	public std::exception
	    {
	    public:
		    virtual char const*	what() const throw()
		    { return "Array subsript out of bounds!"; }
	    };
};

template <typename T>
Array<T> :: Array()
{
    this->len = 0;
    this->tableau = NULL;
}

template <typename T>
Array<T> :: ~Array()
{
    delete[] this->tableau;
}

template <typename T>
Array<T> :: Array(unsigned int n)
{
    this->len = n;
    this->tableau = new T[n];
}

template <typename T>
Array<T> :: Array(const Array<T> &src)
{
    this->len = src.len;
    this->tableau = new T[src.len];
    for (unsigned int i = 0; i<len; i++)
        tableau[i] = src.tableau[i];
}

template <typename T>
int Array<T> :: size() const 
{
    return (this->len);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T>& src)
{
    if (this->len == src.len)
    {
        this->len = src.len;
        this->tableau = new T[src.len];
        for (unsigned int i = 0; i<len; i++)
            tableau[i] = src.tableau[i];
        return (*this);
    }
    else
    {
        delete[] this->tableau;
        this->tableau = new T[src.len];
        this->len = src.len;
        for (unsigned int i = 0; i<len; i++)
            tableau[i] = src.tableau[i];
        return (*this);
    }
}

template <typename T>
T &Array<T>::operator[](unsigned int indice)
{
    if (indice < len)
        return (this->tableau[indice]);
    throw OutOfBoundsException();
} 
#endif 