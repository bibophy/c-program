//#include<stdio.h>
//
//void fun(int i, int n, int j, int k)
//{
//	j = 2;
//
//	int iTemp, iPos;
//
//	printf("%d=", n);
//
//	iTemp = n;
//	for (i = 2; iTemp > 1; i++)
//
//	{
//		iPos = i;
//
//		while (iTemp % iPos == 0)
//
//		{
//
//			iTemp /= iPos;
//
//			printf("%d", iPos);
//
//			if (iTemp > 1)
//
//				printf("*");
//
//		}
//
//	}
//	printf("\n");
//}
//
//int main(void)
//{
//	int i = 1, n = 2, j = 2, k = 2;
//	printf("������һ������:");
//	scanf_s("%d", &n);
//
//	for (; n > 1; n--)         //���������������2
//		fun(i, n, j, k);      //��Ȼһ��8���ԣ���ô��д��������ÿ����װ��8�ı���-1����
//
//	return 0;
//}