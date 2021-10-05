 //环境 相对路径 //   \\ /
#include <stdlib.h>
#include "common2.h"

void fun();
void fun2();
void fun3();

int a = 12;

int main(void)
{
	const int c = 23;
	
	//a = 45;
	//printf ("%d,%p\n", a, &a);

	//fun2();
	//fun();
	
	//const int c[12] = {1,2,3};
	


	//fun3();

	//int a = 34;

	/*printf ("%d\n", a);
	printf ("%d,%d,%d\n", b[0], b[1], b[2]);
	printf ("%p\n", p);
	printf ("%d,%lf\n", a_temp.a, a_temp.b);*/

	

	system("pause");
	return 0;
}

//void fun3()
//{
//	//extern int e;
//	printf ("%d\n", e);
//}


//
//int a = 3;
//int b[3] = {1,2,3};
//int *p;// = (int*)malloc(4);
//
//struct Node
//{
//	int a;
//	double b;
//}a_temp = {1,3.4};






//printf ("%d,%d\n", sum(3,4), mul(4,5));
//printf ("%d,%d\n", Jian(3,4), Chu(4,5))

//struct GG;
//struct HH;
//
//struct GG
//{
//	struct HH* h;
//	int a;
//};
//
//
//struct HH
//{
//	struct GG* g;
//	int a;
//};

//第一结构体不能互相嵌套实例，可以嵌套指针
//结构体 不能包含 自己的实例

//struct HH
//{
//	struct HH* g;
//	int a;
//};
//
//int a;
//
//
//
////
//#ifndef CC3   //if not define
//#define CC3
//
//int sum(int a, int b);
//int mul(int a, int b);
//
//struct C3
//{
//	int a;
//};
//
//#endif
//
//#ifndef D3   //if not define
//#define D3
//
//	#ifndef CC3   //if not define   if else
//	#define CC3
//
//	int sum(int a, int b);
//	int mul(int a, int b);
//
//	struct C3
//	{
//		int a;
//	};
//
//	#endif
//
//int Jian(int a, int b);
//int Chu(int a, int b);
//
//#endif
//#include "c3.h"
//#include "d3.h"
//
//



