#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void) {
	int score;
	char garde='A';
	scanf("%d", &score);
	switch (score/10)
	{case (1):
	case(2):
	case(3):
	case(4):
	case(5):garde = 'E'; break;
	case(6):garde = 'D'; break;
	case(7):garde = 'C'; break;
	case(8):garde = 'B'; break;
	case(9):garde = 'A'; break;
	case(10):garde = 'A'; break;
	}
	printf("%c\n", garde);
	return 0;
}