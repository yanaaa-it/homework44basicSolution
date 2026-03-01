#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;
	int number;

	do {
		system("cls");
		cout << "Input the size of array: ";
		cin >> length;
	} while (length <= 0);

	cout << "input one number:";
	cin >> number;

	user_init(array, length);
	print("\nCount of non zero elements is ");
	print(to_string(cout_elements_great_number(array, length, number)) + ".\n");

	return 0;
}