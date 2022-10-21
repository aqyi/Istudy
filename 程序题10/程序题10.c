#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void) {
	int i, a, n, item, sum;
	scanf("%d%d", &a, &n);
	item = a;
	sum = a;
	for (i = 2; i <= n; ++i) {
		item = item * 10 + a;
		sum += item;
	}
	printf("%d\n", sum);
	return 0;
}