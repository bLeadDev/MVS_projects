#include "binarySearch.h"

// Author: Michael Geuze
// Date: 23.05.2022
// 
// Function to binary search an array for a given value. Size of array can be up to 0xFFFD, the other 
// two values are reserved for exceptions. Do not exceed size limitation or undefined behaviour can occur.
// 
// As in the comment of the function is said, do not use binarySearchPVT without binarySearch. 
// Limitations are not getting checked in the PVT function. 
//

//Private function. Do not use without binarySearch!
uint16_t binarySearchPVT(uint16_t list[], uint16_t valueToFind, uint16_t lowerBoundary, uint16_t upperBoundary) {
	if (lowerBoundary == upperBoundary - 1) {
		if (list[lowerBoundary] == valueToFind) {
			return lowerBoundary;
		}
		else if (list[upperBoundary] == valueToFind) {
			return upperBoundary;
		}
		else {
			return BS_EXCEPTION_ENTRY_NOT_IN_LIST;
		}
	}

	uint16_t middleOfList = (upperBoundary + lowerBoundary) / 2;

	if (list[middleOfList] < valueToFind) {
		return binarySearchPVT(list, valueToFind, middleOfList, upperBoundary);
	}
	else if (list[middleOfList] > valueToFind) {
		return binarySearchPVT(list, valueToFind, lowerBoundary, middleOfList);
	}
	else {
		return middleOfList;
	}
}


uint16_t binarySearch(uint16_t list[], uint16_t valueToFind, uint16_t lowerBoundary, uint16_t upperBoundary) {
	if (NULL == list) {
		return BS_EXCEPTION_LIST_WAS_NULLPTR;
	}

	if (list[lowerBoundary] > valueToFind || list[upperBoundary] < valueToFind) {
		return BS_EXCEPTION_ENTRY_NOT_IN_LIST;
	}

	if (list[lowerBoundary] == valueToFind) {
		return lowerBoundary;
	}
	else if (list[upperBoundary] == valueToFind) {
		return upperBoundary;
	}

	return binarySearchPVT(list, valueToFind, lowerBoundary, upperBoundary);
}