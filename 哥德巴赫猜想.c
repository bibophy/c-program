//#include<stdio.h>
//
//int main(void)
//{
//	int tag, k, m, n;
//	for (tag = 6; tag <= 200; tag = tag + 2)
//	{
//		for(k = 3; k<tag; k++)
//		{
//			for (m = 2; m < k; m++)
//				if (k % m == 0)
//					break;
//
//			if (m < k)
//				continue;
//
//			for (m < 2, n = tag - k; m < n; m++)
//				if (n % m == 0)
//					break;
//			if (m < n)
//				continue;
//			else
//			{
//				printf("%d���Բ��Ϊ%d��%d\n", tag, k, n);
//				break;
//			}
//		}
//		if (k >= tag)
//		{
//			printf("%d�����Բ��\n", tag);
//			break;
//		}
//	}
//	return 0;
//}
