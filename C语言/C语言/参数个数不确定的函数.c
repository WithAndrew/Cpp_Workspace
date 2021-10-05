//#include <stdio.h>
//#include <stdlib.h>
//#include <stdarg.h>
//
//void fun(int a, ...) //指定未知参数的个数
//{
//	va_list ap; //定义参数数组
//	va_start(ap, a) ;  //讲参数 装进数组
//	printf ("%d\n", va_arg(ap, int));
//	printf ("%lf\n",va_arg(ap, double));
//	printf ("%d\n",va_arg(ap, int));
//}
//
//
//int main(void)
//{
//	fun(3, 12, 34.34, 56);
//	//printf ("%d %d %d", 12 ,23 );
//
//
//	system("pause");
//	return 0;
//}