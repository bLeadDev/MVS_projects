#include <stdio.h>
#include <stdlib.h>

void sort(unsigned int* arr, unsigned int len) {
	unsigned int min = 0;
	for (unsigned int i = 0; i < len; i++)
	{
		for (unsigned int j = i; j < len; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		unsigned int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}

}

int main() {
	unsigned int a[] = { 14, 2, 4 , 13 , 55 , 66, 22, 12 };

	for (int i = 0; i < _countof(a) - 1; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");


	sort(a, _countof(a) - 1);

	for (int i = 0; i < _countof(a) - 1; i++) {
		printf("%d ", a[i]);
	}

}