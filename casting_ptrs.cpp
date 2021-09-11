#include <iostream>

int main()
{
	int num = 2;
	void* void_ptr = &num;
	//*void_ptr = 3; // not allowed! - expression must be a pointer to a complete object type
	//int* another_ptr = void_ptr; // not allowed! - void* cannot be used to initialize int*
	*(int*)void_ptr = 3;
	int* another_pointer = (int*)void_ptr;

	std::cout << num << " " << another_pointer << std::endl;
	return 0;
}
