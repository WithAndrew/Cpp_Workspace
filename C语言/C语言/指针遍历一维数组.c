//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	//定义一个一维数组
//	int a[5] = {9,1,2,3,4};
//	int *p = &a[0];
//
//	int i = 0;
//
//	//for (i = 0 ; i < 5; i++)
//	//{
//	//	printf ("%d\n", *(p + i));//
//	////	printf ("%d\n", *p + i);//
//	//}
//	
//	*(p + 2) = 13;
//
//	for (i = 0 ; i < 5; i++)
//	{
//		//printf ("%d\n", *p++);//
//		//printf ("%d\n", (*p)++);//
//
//		printf ("%d\n", *(p+i));//
//		//	printf ("%d\n", *p + i);//
//	}
//	printf ("qweqwe:%p\n", p);//
//
////	p+1; 
////	&a[0]+1;
//
//	//printf ("%p, %p, %p, %p, %p\n", p, p+1, p+2, p+3, p+4);
//	//printf ("%p\n", p);
//	printf ("%p, %p, %p, %p, %p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);
//
//	printf ("%p ", p);
//	printf ("%p ", ++p);
//	printf ("%p ", ++p);
//	printf ("%p ", ++p);
//	printf ("%p\n", ++p);
//	printf ("%p\n", p);
//
//
//
//
//	system ("pause");
//	return 0;
//}