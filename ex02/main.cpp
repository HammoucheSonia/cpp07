#include "Array.hpp"
#include <iostream>
#include <stdlib.h>

#define MAX_VAL 750

int main()
{
    try
    {
        Array<int> arrInt(5);
	    Array<char> arrChar(7);
	    Array<std::string> arrString(3);


	    arrChar[0] = 'b';
        arrChar[1] = 'o';
        arrChar[2] = 'n';
        arrChar[3] = 'j';
        arrChar[4] = 'o';
        arrChar[5] = 'u';
        arrChar[6] = 'r';
        std :: cout << arrChar[0] << arrChar[1] << arrChar[2] << arrChar[3] \
        << arrChar[4] << arrChar[5] << arrChar[6] << std :: endl;
        std :: cout << "################################"<< std :: endl;

        arrInt[0] = 111;
	    arrInt[1] = 11;
	    arrInt[2] = 12;
	    arrInt[3] = 13;
	    arrInt[4] = 14;
        std :: cout << "[" << arrInt[0] << "." << arrInt[2] << "." << arrInt[3] \
        << "." << arrInt[4] << "]" << std :: endl;
        std :: cout << "################################"<< std :: endl;
        std :: cout << "verification de l'operateur =" << std :: endl;
        Array<int> arrInt_2(50);
        arrInt_2 = arrInt;
        std :: cout << "[" << arrInt_2[0] << "." << arrInt_2[2] << "." << arrInt_2[3] \
        << "." << arrInt_2[4] << "]" << std :: endl;
        Array<char> arrChar_2(2);
        arrChar_2 = arrChar;
        std :: cout << arrChar_2[0] << arrChar_2[1] << arrChar_2[2] << arrChar_2[3] \
        << arrChar_2[4] << arrChar_2[5] << arrChar_2[6] << std :: endl;
        //std :: cout << "fin de la verification de l'operateur =" << std :: endl;
        std :: cout << "################################"<< std :: endl;
        arrString[0] = "bonjour ";
        arrString[1] = " a tous";
        arrString[2] = " les camarades";
        std :: cout << arrString[0] << arrString[1] << arrString[2] << std :: endl;
        std :: cout << "#################################"<< std :: endl;


        std :: cout << "  arrInt size : " << arrInt.size() << std :: endl;
        std :: cout << "  arrChar size : " << arrChar.size() << std :: endl;
        std :: cout << "  arrString size : " <<arrString.size() << std :: endl;

        std :: cout << "#################################\n\n";
    }
    catch(std :: exception &e)
    {
        std :: cout << e.what() << std :: endl;
    }
    try
	{
		Array<int>			int_test(15);
		Array<std::string>	string_test(15);
		Array<float>		empty_test;

		int_test[2] = 42;
        int_test[14] = 20;
		std::cout << int_test[14] << std::endl;
		std::cout << int_test[2] << std::endl;
        string_test[5] = "Howdy, this string is stored in array.";
		std::cout << string_test[5] << std::endl;
		std::cout << string_test[5] << std::endl;
		Array<std::string>	copy_test(string_test);
		std::cout << copy_test[5] << std::endl;
		std::cout << empty_test.size() << std::endl;
		std::cout << empty_test[1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}