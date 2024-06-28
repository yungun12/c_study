#include <stdio.h>

void main()
{
	int a,num;
	printf("입력진수 결정<1>10 <2>16 <3>8 : ");
	scanf("%d", &a);
	printf("숫자를 입력하세요 : ");

	switch (a) {
		case 1: scanf("%d", &num);
			printf("10진수 : %d\n", num);
			printf("16진수 : %x\n", num);
			printf("8진수 : %o\n", num);
			break;

		case 2: scanf("%x", &num);
			printf("10진수 : %d\n", num);
			printf("16진수 : %x\n", num);
			printf("8진수 : %o\n", num);
			break;

		case 3: scanf("%o", &num);
			printf("10진수 : %d\n", num);
			printf("16진수 : %x\n", num);
			printf("8진수 : %o\n", num);
			break;
		default:
			printf("잘못된 선택입니다.\n");
	}
}

