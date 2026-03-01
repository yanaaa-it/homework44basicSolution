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

	user_init(array, length);
	print(to_string(check_all_positive(array, length)));
	print(" numbers are positive");
	


	return 0;
}