#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void) {
	int n, x, y, eaten;
	scanf("%d%d%d", &n,&x, &y);
	eaten = y / x;
	if(eaten>=n)
	eaten = n;
	else if(y%x!=0)
	++eaten;
	printf("%d\n", (n - eaten));
	return 0;
}