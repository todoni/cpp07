#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

/*template <typename T> //doesn't make sense
void	iter(const T* array, std::size_t length, void (*f)(T*))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}*/

template <typename T>
void	iter(T* array, std::size_t length, void (*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	doPrint(const T& arg)
{
	std::cout << arg << std::endl;
}

/*template <typename T, typename U> //away from subject's spirit
void	iter(T* array, std::size_t length, U (*f)(const T&))
{
	std::cout << "T: non-const pointer U:const refference" << std::endl;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T, typename U>
void	iter(T* array, std::size_t length, U (*f)(T&))
{
	std::cout << "T:non-const pointer U:non-const refference" << std::endl;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T, typename U>
void	iter(T* array, std::size_t length, U (*f)(const T*))
{
	std::cout << "T:non-const pointer U:const pointer" << std::endl;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}*/

#endif
