#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int reverse(int n);
int  main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", reverse(n));
	return 0;
}
int reversse(int n) {
	int remainder, result = 0, flag = 1;
	if (n <0){
		n = -n;
	flag = -1;
}
  while (n != 0) {
	remainder = n % 10;
	result = result * 10 + remainder;
	n = n / 10;
	result = result * flag;
}