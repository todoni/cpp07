#include "iter.hpp"
#include <iostream>
#include <sstream>
#include <string>
#define SIZE 10

int	main()
{
	//const int cintArray[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int		intArray[SIZE];
	int		*pintArray = new int[SIZE];
	double	dArray[SIZE];
	double	*pdArray = new double[SIZE];
	std::string strArray[SIZE];
	std::string	*pstrArray = new std::string[SIZE];
	

	for (size_t i = 0; i < SIZE; i++)
	{	
		intArray[i] = i;
		pintArray[i] = i;

		dArray[i] = i + 0.1*i;
		pdArray[i] = i + 0.1*i;

		std::stringstream	ss;
		std::string			s;
		ss << i;
		ss >> s;
		strArray[i] = "sohan" + s;
		pstrArray[i] = "sohan" + s;
	}

	std::cout << "===========stack===========" << std::endl;
	iter(intArray, SIZE, doPrint);
	std::cout << "==========pointer==========" << std::endl;
	iter(pintArray, SIZE, doPrint);
	
	std::cout << "===========stack===========" << std::endl;
	iter(dArray, SIZE, doPrint);
	std::cout << "==========pointer==========" << std::endl;
	iter(pdArray, SIZE, doPrint);

	std::cout << "===========stack===========" << std::endl;
	iter(strArray, SIZE, doPrint);
	std::cout << "==========pointer==========" << std::endl;
	iter(pstrArray, SIZE, doPrint);

}
