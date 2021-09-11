#include <iostream>

int main()
{
	int a = 5;
	int b = 99;
	int* p_a = &a;
	int** pp_a = &p_a;

	std::cout << &a << " " << a << std::endl;
	std::cout << &p_a << " " << p_a << " " << *p_a << std::endl;
	std::cout << &pp_a << " " << pp_a << " " << *pp_a << " "<< **pp_a <<std::endl;

	*p_a = 8;
	a = 7;
	*pp_a = &b;

	std::cout << &a << " " << a << std::endl;
	std::cout << &p_a << " " << p_a << " " << *p_a << std::endl;
	std::cout << &pp_a << " " << pp_a << " " << *pp_a << " " << **pp_a << std::endl;
	return 0;
}
