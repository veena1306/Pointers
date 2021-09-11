#include <iostream>

int main()
{
	int num1       = 1;
	int num2       = 2;
	const int num3 = 3;

	//int* p = &num3; // won't compile - regular pointer to constant variable
	//const int* p = &num3; // compile
	//*p = 666; // won't compile - cannot change value of constant pointer
	//int* const p = &num3; // won't compile - constant pointer is required
	// int const* p = &num3; // compile
	// const int* p = &num1; // compile
	//int* p = &num2;
	//*p = num3; // compile
	//int* const p = &num2;
	//p = &num1; // won't compile - constant pointer
	//*p = 555;
	//const int* const p = &num1; // const pointer to const variable
	//*p = 0; // wont compile
	//p = &num2; // wont compile

									
	return 0;
}
