#include "Array.hpp"

int	main()
{
	Array<int> arr1(3);
	arr1[0] = 0;
	arr1[1] = 1;
	arr1[2] = 2;

	Array<int> arr2(3);
	arr2[0] = 4;
	arr2[1] = 5;
	arr2[2] = 6;

	const Array<int> constCopy(arr2);
	constCopy[0];
	std::cout << "==============Indexing Test================" << std::endl;
	test<int>(10, "Int");
	test<double>(10, "Double");
	test<char>(10, "Char");
	std::cout << "==============DeepCopy Test================" << std::endl;
	test(arr1, arr2);
	std::cout << "========Differnt Size Assignment Test======" << std::endl;
	test<int>(5, 9);
	std::cout << "=============Invalid Index Test============" << std::endl;
	int n = -1;
	try
	{
		arr1[n];
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "==================String Test==============" << std::endl;
	Array<std::string> arr3(3);
	arr3[0] = "Hi!";
	arr3[1] = "I'm";
	arr3[2] = "Sohan!";
	Array<std::string> arr4(arr3);
	for (unsigned int i = 0 ; i < arr3.size() ; ++i)
		std::cout << arr3[i] << " ";
	std::cout << std::endl;
	std::cout << "copied ..." << std::endl;
	for (unsigned int i = 0 ; i < arr4.size() ; ++i)
		std::cout << arr4[i] << " ";
	std::cout << std::endl;
	std::cout << "Access to index bigger than size" << std::endl;
	try 
	{
		arr3[3] = "Will throw exception";
		arr4[3] = "So we can't get here";
	}
	catch (std::exception& e) 
	{
		std::cout << e.what() << std::endl;
	}
  	std::cout << "==============mem leak check=============" << std::endl;
	
	system("leaks array");
}
