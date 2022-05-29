#include <stdio.h>

#define BIT_MASK 0xFF

typedef union intAndChar_u
{
	int a;
	unsigned char c[4];
}intAndChar_t;


int main() {
	int a = 0xAAFFEEDD;
	
	intAndChar_t x = { .a = 0xAAFFEEDD };
	int lol = 0xCCAAFFEE;

	unsigned char* c = &a;
	for (int i = 0; i < 4; i++) {
		printf("0x%02X ", *(c + i));
	}

	printf("%02x ", x.c[0]);
	printf("%02x ", x.c[1]);
	printf("%02x ", x.c[2]);
	printf("%02x \n", x.c[3]);

	for (int i = 0; i < 4; i++) {
		printf("%02x ", ( (a >> (8 * i)) & BIT_MASK));
	}




}