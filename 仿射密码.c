///*��������*/
///*���ܺ���y=11x+6mod26 ���ܺ���x=19y+16mod26*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void transform(char s[], int n[]);
//void endecryp(int input[], int a, int b, int output[]);
//int m;
//void main()
//
//{
//
//	char s[100]; int n[100], d[100];
//	transform(s, n);
//	/*����*/
//	endecryp(n, 11, 6, d);
//	/*����*/
//	endecryp(d, 19, 16, n);
//}
///*��ĸת��Ϊ���ֺ���*/
//void transform(char s[], int n[])
//{
//	int i;
//	printf("����������Сд���д��ĸ:");
//	gets(s);
//	m = strlen(s);
//	for (i = 0; i < m; i++)
//	{
//		if (s[i] >= 'a' && s[i] <= 'z')
//		{
//			n[i] = s[i] - 'a';
//		}
//		else if (s[i] >= 'A' && s[i] < 'Z')
//		{
//			n[i] = s[i] - 'A';
//		}
//		else
//		{
//			printf("��������");
//			exit(1);
//		}
//		printf("%4d", n[i]);
//	}
//	printf("\n");
//}
///*�ӽ��ܺ���*/
//void endecryp(int input[], int a, int b, int output[])
//{
//	int i;
//	for (i = 0; i < m; i++)
//	{
//		output[i] = (a * input[i] + b) % 26;
//		printf("%4d", output[i]);
//	}
//	printf("\n");
//}