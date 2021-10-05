//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int a = 12; //a  0x10
//	int *p = &a; //p  0x20
//
//	//证明不同
//	int* *p1 = &p; //2级指针  1级指针
//	//int** *p2 = &p1;
//
//	*p1 == p;
//	*p == a;
//	**p1 == *p == a;
//
//
//	printf ("%p,%p,%p,%p,%p,%p\n", &a, p, &p, p1, *p1, &p1);
//	printf ("%d,%d,%d\n", a, *p, **p1);
//
//	////
//	//int *p3 = p; 
//	//int b[3][4];
//	//int **p3 = &b;
//
//	//int (*P4 )[3][4] = &b;
//
//
//
//	system("pause");
//	return 0;
//}