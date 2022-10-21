#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void) {
	int a, b, sum, min, max;
	double average;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	average = (a + b) / 2.0;
	printf("%.2f\n", average);
	min = (a > b) ? b : a;
	printf("%d\n", min);
	max = (a > b) ? a : b;
	printf("%d\n", max);
	return 0;
}