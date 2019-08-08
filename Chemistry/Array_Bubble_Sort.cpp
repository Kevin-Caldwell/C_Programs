#include <conio.h>
#include <iostream>

int arr_length;

//void swap(int &num1, int &num2){
//
//	int temp = num1;
//
//	num1 = num2;
//	num2 = temp;
//
//}

//int* bubble_sort(int arr[]){
//
//	for (int j = 0; j < arr_length; j++)
//	{
//
//
//		for (int i = 1; i < arr_length; i++)
//		{
//			if(arr[i] < arr[i - 1]){
//
//				swap(arr[i], arr[i - 1]);
//			}
//		}
//	}
//
//	return arr;
//}

void print_arr(int arr[])
{
	using namespace std;

	cout << "Array : ";

	for (int i = 0; i < arr_length; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";
}

//void main(){
//	int num1 = 12;
//	int num2 = 34;
//
//	swap(num1, num2);
//
//	std::cout << num1 << " " << num2 << "\n";
//
//	std::cout << "Enter the number of elements: ";
//	std::cin >> arr_length;
//	std::cout << "\n";
//
//	int *arr = new int[arr_length];
//
//	for (int i = 0; i < arr_length; i++)
//	{
//		std::cout << "Enter Array Element number " << (i + 1) << " : ";
//		std::cin >> arr[i];
//		std::cout << "\n";
//	}
//
//	arr = bubble_sort(arr);
//
//	print_arr(arr);
//
//	_getch();
//}