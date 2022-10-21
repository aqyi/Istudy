#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void) {
	int i, j, n, sum, subitem;
	scanf("%d", &n);
	sum = 0;
	for (i = 1; i <= n; ++i) {
		subitem = 0;
		for (j = 1; j <= i; ++j)
			subitem += j;
		sum += subitem;
	}
	printf("%d\n", sum);
	return 0;
}