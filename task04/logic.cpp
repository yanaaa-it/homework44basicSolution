#include "logic.h"

int check_all_positive(int array[DEFAULT_SIZE], int length) {
	int count = 0;

	for (int i = length - 1; i >= 0; i--)
	{
		if (array[i] > 0) {
			count++;
		}
	}

	return count;
}