#include <stdio.h>

void main()
{
	int a, b, c, d;
	int result;

	printf("첫번째 계산할 값을 입력하시오 ==> ");
	scanf("%d", &a);

	printf("두번째 계산할 값을 입력하시오 ==> ");
	scanf("%d", &b);

	printf("세번째 계산할 값을 입력하시오 ==> ");
	scanf("%d", &c);

	printf("네번째 계산할 값을 입력하시오 ==> ");
	scanf("%d", &d);

	result = a + b + c + d;
	printf(" %d  +  %d  +  %d  +  %d  =  %d \n", a, b, c, d, result);
}
