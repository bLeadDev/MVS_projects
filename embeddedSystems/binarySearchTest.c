#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "binarySearch.h"

int main() {
	uint16_t testNumber = 1;
	//Testing value at random middle position
	//Test 1
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35, 42 };
		uint16_t valueToFind = 15;
		uint16_t expectedElement = 3;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing value at random middle position
	//Test 2
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35, 42 };
		uint16_t valueToFind = 27;
		uint16_t expectedElement = 5;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing value at position zero
	//Test 3
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35, 42 };
		uint16_t valueToFind = 0;
		uint16_t expectedElement = 0;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing value at last position
	//Test 4
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35, 42 };
		uint16_t valueToFind = 42;
		uint16_t expectedElement = 7;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing value in midde, uneven count of array
	//Test 5
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35 };
		uint16_t valueToFind = 15;
		uint16_t expectedElement = 3;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing value at position zero, uneven count of array
	//Test 6
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35};
		uint16_t valueToFind = 0;
		uint16_t expectedElement = 0;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing value at last postion, uneven count of array
	//Test 7
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35 };
		uint16_t valueToFind = 35;
		uint16_t expectedElement = 6;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing number out of bounds
	//Test8
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35 };
		uint16_t valueToFind = 36;
		uint16_t expectedElement = BS_EXCEPTION_ENTRY_NOT_IN_LIST;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing number out of bounds
	//Test9
	{
		uint16_t listInOrder[] = { 1 , 3, 12, 15, 22, 27, 35 };
		uint16_t valueToFind = 0;
		uint16_t expectedElement = BS_EXCEPTION_ENTRY_NOT_IN_LIST;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing number out of bounds
	//Test10
	{
		uint16_t* listInOrder = NULL;
		uint16_t valueToFind = 32;
		uint16_t expectedElement = BS_EXCEPTION_LIST_WAS_NULLPTR;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing list with one element
	//Test11
	{
		uint16_t listInOrder[] = { 1 };
		uint16_t valueToFind = 1;
		uint16_t expectedElement = 0;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing list with one element, out of bounds
	//Test12
	{
		uint16_t listInOrder[] = { 1 };
		uint16_t valueToFind = 3;
		uint16_t expectedElement = BS_EXCEPTION_ENTRY_NOT_IN_LIST;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing with second last element
	//Test 13
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35, 42 };
		uint16_t valueToFind = 35;
		uint16_t expectedElement = 6;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing with second element
	//Test 14
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35, 42 };
		uint16_t valueToFind = 3;
		uint16_t expectedElement = 1;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing with second last element, uneven count of array
	//Test 15
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35 };
		uint16_t valueToFind = 27;
		uint16_t expectedElement = 5;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing with second element, uneven count of array
	//Test 16
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35 };
		uint16_t valueToFind = 3;
		uint16_t expectedElement = 1;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 0, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	//Testing with lowerBoundary not 0 , uneven count of array
	//Test 17
	{
		uint16_t listInOrder[] = { 0 , 3, 12, 15, 22, 27, 35 };
		uint16_t valueToFind = 22;
		uint16_t expectedElement = 4;
		uint16_t entryAtElement = binarySearch(listInOrder, valueToFind, 2, (uint16_t)_countof(listInOrder) - 1);
		if (entryAtElement == expectedElement) {
			printf("Passed test %d\n", testNumber);
		}
		else {
			printf("Test %d failed.\n", testNumber);
		}
		testNumber += 1;
	}
	return EXIT_SUCCESS;
}