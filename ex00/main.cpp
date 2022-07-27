#include "whatever.hpp"
#include <iostream>

int	main()
{
	const int a = 0;
	const int b = 1;

	//swap(a, b);
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << min(a, b) << std::endl;
	std::cout << max(a, b) << std::endl;

	std::cout << min(&a, &b) << std::endl;
	std::cout << max(&a, &b) << std::endl;

	const int *c = min(&a, &b);

	std::cout << c << std::endl;

	int	d = 3;
	int	e = 42;

	int *dd = &d;
	int *ee = &e;

	int **ddd = &dd;
	int **eee = &ee;

	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << &d << std::endl;
	std::cout << &e << std::endl;
	swap(&d, &e);
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << &d << std::endl;
	std::cout << &e << std::endl;
	swap(d, e);
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << &d << std::endl;
	std::cout << &e << std::endl;
	swap(dd, ee);
	std::cout << dd << std::endl;
	std::cout << ee << std::endl;
	std::cout << &dd << std::endl;
	std::cout << &ee << std::endl;
	std::cout << min(dd, ee) << std::endl;
	std::cout << max(dd, ee) << std::endl;
	swap(ddd, eee);
	std::cout << ddd << std::endl;
	std::cout << eee << std::endl;
	std::cout << &ddd << std::endl;
	std::cout << &eee << std::endl;
	std::cout << min(&ddd, &eee) << std::endl;
	std::cout << max(&ddd, &eee) << std::endl;
	int f = 2;
	int g = 3;
	::swap( &f, &g );
	std::cout << "a = " << f << ", b = " << g << std::endl;
	std::cout << "min( a, b ) = " << ::min( f, g ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( f, g ) << std::endl;
	std::string h = "chaine1";
	std::string i = "chaine2";
	::swap(h, i);
	std::cout << "c = " << h << ", d = " << i << std::endl;
	std::cout << "min( c, d ) = " << ::min( h, i ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( h, i ) << std::endl;
	return 0;
}
