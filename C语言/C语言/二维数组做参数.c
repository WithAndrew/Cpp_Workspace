//#include <stdio.h>
//#include <stdlib.h>
// //     int a[2][3]  int (*p)[3]
//void fun(int p[2][3], int hang, int lie) 
//{
//	int i,j;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf ("%d,%d\n", p[i][j], sizeof(p));
//		}
//	}
//}
//
//void fun1(int *p, int hang, int lie) 
//{
//	int i;
//	for (i = 0; i < hang*lie; i++)
//	{		
//	   printf ("%d,%d\n", p[i], sizeof(p));
//	}
//}
//
//void fun2(int (*p)[2][3], int hang, int lie) 
//{
//	int i,j;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf ("%d,%d\n", (*p)[i][j], sizeof(p));
//		}
//	}
//}
//
//void fun(int p[2][3], int hang, int lie) 
//{
//	int i,j;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf ("%d,%d\n", p[i][j], sizeof(p));
//		}
//	}
//}
//
//
//int main(void)
//{
//	int a[2][3] = {{1,2,3},{4,5,6}};
//	int (*p)[3] = a;
//	fun(a, 2, 3);
//	fun1(&a[0][0], 2 , 3);
//	fun2(&a, 2 , 3);
//
//
//	system("pause");
//	return 0;
//}