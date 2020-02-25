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
//	printf("请输入一个正数:");
//	scanf_s("%d", &n);
//
//	for (; n > 1; n--)         //从输入的数遍历到2
//		fun(i, n, j, k);      //既然一个8可以，那么就写个函数，每次让装着8的变量-1就行
//
//	return 0;
//}