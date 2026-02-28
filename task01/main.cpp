#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "Input the size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);
	print("\nCount of non zero elements is ");
	print(to_string(count_non_zero_elements(array, length)) + ".\n");

	return 0;
}