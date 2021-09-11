#include <iostream>

void f(int arr[], int size)
{
	if (size < 0)
		std::cout << "Error";
	else
		arr[1] = 99;
}

void f2(int a) { a = 0; }
void f3(int* a) { *a = 0; }

int main()
{
	int num = 2;
	std::cout << num << std::endl;
	f2(num);
	std::cout << num << std::endl;
	
	
	int n2 = 3;
	std::cout << n2 << std::endl;
	f3(&n2);
	std::cout << n2 << std::endl;
	
	int arr[4] = { 1,2,3,4 };
	int size_of_arr = sizeof(arr) / sizeof(arr[0]);
	int* temp = arr;
	int* arr_last_val = arr + size_of_arr - 1;
	for (temp; temp <= arr_last_val; temp++)
	{
		std::cout << *temp << " ";
	}

	/* - another way of printing the array's values
	
	int size_of_arr = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size_of_arr; i++)
		std::cout << arr[i] << " ";
	std::cout << "end of the array !" << std::endl;
	f(arr, size_of_arr);
	for (int i = 0; i < size_of_arr; i++)
		std::cout << arr[i] << " ";
	std::cout << "end of the array !" << std::endl;
	*/

	return 0;
}
