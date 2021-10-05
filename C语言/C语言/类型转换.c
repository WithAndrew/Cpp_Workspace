//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//int main(void)
//{
//	/*int a = 12;
//	double *p = (double*)&a; 
//	*p = 21.3;*/
//	double a = 12.3;
//	int *p = (int*)&a;
//	*p = 12;
//	*(p+1) = 23;
//
//	//指针/地址的类型 决定着 指针/地址的读写方式（字节数） + 1 +-8
//	printf ("%d,%d\n",*(int*)&a, *((int*)&a+1));
//
//	*(int*)((short*)p + 1) = 23;
//	printf ("%d\n",*(int*)((char*)&a+2));
//
//	//unsigned char c =  (unsigned char)1234.4;  /// 1234%256 4 ----210
//	//int a = (int)12.53;
//	//double b = (double)12;
//	//int *p = (int*)malloc (8);
//	//printf ("%lf, %d\n", 12+12.2, 12+(int)12.2);
//
//	system("pause");
//	return 0;
//}