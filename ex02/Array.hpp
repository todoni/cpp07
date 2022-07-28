#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T>
class	Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array()
		{
			_array = new T[0];
			_size = 0;
		};

		Array(unsigned int n)
		{
			_array = new T[n];
			_size = n;
		}

		Array(const Array& copy)
		{
			_array = new T[copy.size()];
			_size = copy.size();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = copy._array[i];
		};

		Array& operator=(const Array& copy)
		{
			if (this != &copy)
			{
				T*	tmp;
				tmp = _array;
				_array = new T[copy.size()];
				_size = copy.size();
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = copy._array[i];
				delete [] tmp;
			}
			return (*this);
		};

		~Array()
		{
			delete [] _array;
		};

		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw OutOfRangeException();
			return (_array[index]);
		};

		const T& operator[](unsigned int index) const
		{
			if (index >= _size)
				throw OutOfRangeException();
			return (_array[index]);
		};

		unsigned int	size(void) const
		{
			return (_size);
		}

class OutOfRangeException : virtual public std::exception{
public:
	explicit OutOfRangeException() {}

	virtual ~OutOfRangeException() throw() {}

	virtual const char*	what() const throw () {
		return ("Out of Array Index!");
	}
};


};

template <typename T>
void	test(unsigned int size, const char* type)
{
	Array<T> arr(size);
	std::cout << "[" << type << "]" << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		arr[i] = i + 97 * 0.1*i;
		std::cout << "arr[" << i << "]" << ": " << arr[i] << std::endl;
	}
}

template <typename T>
void	test(const Array<T>& arr1, const Array<T>& arr2)
{
	Array<T> arr3(arr1);
	Array<T> arr4(arr2);
	std::cout << "[arr3, copy construction of arr1]" << std::endl;
	for (unsigned int i = 0; i < arr1.size(); i++)
		std::cout << arr3[i] << std::endl;
	std::cout << "[arr4, copy construction of arr2]" << std::endl;
	for (unsigned int i = 0; i < arr2.size(); i++)
		std::cout << arr4[i] << std::endl;
	
	std::cout << "Swap arr3 and arr4" << std::endl;
	Array<T> tmp;
	tmp = arr3;
	arr3 = arr4;
	arr4 = tmp;
	std::cout << "[arr1]" << std::endl;
	for (unsigned int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << std::endl;
	std::cout << "[arr2]" << std::endl;
	for (unsigned int i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << std::endl;
	std::cout << "[arr3]" << std::endl;
	for (unsigned int i = 0; i < arr3.size(); i++)
		std::cout << arr3[i] << std::endl;
	std::cout << "[arr4]" << std::endl;
	for (unsigned int i = 0; i < arr4.size(); i++)
		std::cout << arr4[i] << std::endl;
}

template <typename T>
void	test(unsigned int size1, unsigned int size2)
{
	Array<T> arr1(size1);
	Array<T> arr2(size2);
	
	std::cout << "[arr1]" << std::endl;
	for (unsigned int i = 0; i < arr1.size(); i++)
	{
		arr1[i] = 10 + i;
		std::cout << arr1[i] << std::endl;
	}
	std::cout << "[arr2]" << std::endl;
	for (unsigned int i = 0; i < arr2.size(); i++)
	{	
		arr2[i] = i;
		std::cout << arr2[i] << std::endl;
	}
	std::cout << "Assign arr1 to arr2" << std::endl;
	arr2 = arr1;
	std::cout << "[arr3]" << std::endl;
	for (unsigned int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << std::endl;
	std::cout << "[arr4]" << std::endl;
	for (unsigned int i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << std::endl;
}

#endif
