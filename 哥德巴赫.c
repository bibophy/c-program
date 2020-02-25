//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//
// int isprimer(int tag)
// {
//	     if (tag <= 2)
//		     {
//		         return 0;
//		     }
//	     else
//		     {
//		         int i = 2;
//		         while (i < sqrt(tag) && tag % i != 0)
//			         {
//			             i++;
//			         }
//		         if (tag % i == 0)
//			         {
//			             return 0;
//			         }
//		         else
//			         {
//			             return 1;
//			         }
//		     }
//	
//		 }
//
// int main()
// {
//	     for (int i = 6; i < 200; i += 2)
//		     {
//		         for (int j = 2; j <= i / 2; j++)
//			         {
//			             if (isprimer(j) && isprimer(i - j))
//				             {
//				                 printf("i=%d,%d=%d+%d\n", i, i, j, i - j);
//				             }
//			         }
//		     }
//	
//		     system("pause");
//	 }