#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
int main(void) {
	int lowercase, uppercase;
	uppercase = getcahr();
	lowercase = isupper(uppercase) ? tolower(uppercase) : uppercase;
	printf("%c\n", lowercase);
	return 0;
}