#ifndef BINARY_SEARCH
#define BINARY_SEARCH

// Author: Michael Geuze
// Date: 23.05.2022
// 
// Function to binary search an array for a given value. Size of array can be up to 0xFFFD, the other 
// two values are reserved for exceptions. Do not exceed size limitation or undefined behaviour can occur.
//
//

#include <stdint.h>

#define BS_EXCEPTION_ENTRY_NOT_IN_LIST 0xFFFF
#define BS_EXCEPTION_LIST_WAS_NULLPTR 0xFFFE

//Search for given value. Do not exceed size of the array with 0xFFFD
uint16_t binarySearch(uint16_t list[], uint16_t valueToFind, uint16_t lowerBoundary, uint16_t upperBoundary);

#endif