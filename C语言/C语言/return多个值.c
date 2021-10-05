//#include <stdio.h>
//#include <stdlib.h>
//
//int* fun(void)
//{
//	//int *p = (int*)malloc(8); //动态内存分配
//	//*p = 4;
//	//p[1] = 5;
//
//	int p1[2] = {4, 5};
//	return p1;
//}
//
//int main(void)
//{
//	int* a = fun();
//	printf ("%d,%d\n", a[0], a[1]);
//
//	//free(a);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//
////void fun(int a,...) //参数1  要指示参数的个数
////{
////	int i = 0, b;
////
////	va_list ap;       //这个是装参数的变量，类似数组
////	va_start(ap, a);  //这个是将所有的参数装进 ap列表变量
////
////	b = va_arg(ap, int);  //读取从第二个参数开始
////	b = va_arg(ap, int);
////	b = va_arg(ap, int);
////	b = va_arg(ap, int);
////}
//
//int main(void)
//{
//	//fun(4,23,45,67);
//	putchar('a');
//	system("pause");
//	return 0;
//}