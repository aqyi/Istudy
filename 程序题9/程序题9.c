#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void) {
	int a;
	scanf("%d", &a);
	printf("%.2lf", (cos(50 * PI / 180) + sqrt(37.5)) / (a + 1));
	return 0;
}