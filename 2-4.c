#include <stdio.h>

void main()
{
	int a, b, c, d;
	int result;

	printf("ù��° ����� ���� �Է��Ͻÿ� ==> ");
	scanf("%d", &a);

	printf("�ι�° ����� ���� �Է��Ͻÿ� ==> ");
	scanf("%d", &b);

	printf("����° ����� ���� �Է��Ͻÿ� ==> ");
	scanf("%d", &c);

	printf("�׹�° ����� ���� �Է��Ͻÿ� ==> ");
	scanf("%d", &d);

	result = a + b + c + d;
	printf(" %d  +  %d  +  %d  +  %d  =  %d \n", a, b, c, d, result);
}
