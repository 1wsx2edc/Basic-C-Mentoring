#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	printf("16���� ������ �Է��Ͻÿ�:");
	scanf("%x", &x);
	
	printf("8�����δ�%#o�Դϴ�\n 10�����δ�%d�Դϴ�\n 16�����δ�%#x�Դϴ�",x,x,x);
	
	return 0;
}