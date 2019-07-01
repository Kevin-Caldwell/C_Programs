//	C program to keep calculate the sum of the digits of a number until the number is a single digit.
//	546 = 500 + 40 + 6
//	Loop:
//	546 % 10 = 6
//	546 - 6 / 10 = 54

#include <iostream>
#include <list>
#include <conio.h>

int num;


void find_sum_of_digits(){
	int sum = 0;

	while(num >= 10){
		int temp = num % 10;

		num = (num - temp) / 10;

		sum += temp;
	}

	sum += num;
	num = sum;
}

void find_sigle_digit(){
	while(num >= 10){
		find_sum_of_digits();
	}
}

void main(){
	std::cin >> num;

	find_sigle_digit();

	std::cout << "The single digit is: " << num << "\n";

	_getch();
}