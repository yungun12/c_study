#include <stdio.h>

void main()
{
	int  a = 99;

	printf(" AND���� : %d \n", (a >= 100) && ( a <= 200) );
	printf(" OR ���� : %d \n", (a >= 100) || ( a <= 200) );

	printf(" NOT ���� : %d \n", !(a==100) );
}
