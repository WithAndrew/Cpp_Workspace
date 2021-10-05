//#include <stdio.h>
//#include <stdlib.h>
//
//int fun (int a)
//{
//	printf ("我是fun\n");
//	return 9;
//}
//
//int fun1 (int a)
//{
//	printf ("我是fun\n");
//	printf ("我是fun\n");
//	printf ("我是fun\n");
//	return 9;
//}
//
//int fun2 (int a,int b)
//{
//	printf ("我是fun\n");
//	printf ("我是fun\n");
//	printf ("我是fun\n");
//	return 9;
//}
//
//
//void fun5(int a);
//
//int main(void)
//{
//	fun5(5);
//
//
//	system("pause");
//	return 0;
//}
//
//void fun5(int a)
//{
//	if (a > 0)
//	{
//		printf ("%d", a);
//		fun5(a-1);
//	}
//}
//#include <iostream>
//using namespace std;
//template<typename ElementType>
//class LinkList
//{
//public:
//	/*非循环单链表的结点的C++类声明*/
//	class LinkNode
//	{
//	public:
//		ElementType data;			//结点的数据域
//		LinkNode* next;				//结点的指针域
//	};
//	
//	typedef LinkNode *NodePointer;		//指向节点的额指针类型声明
//
//	/*取第一个结点的指针，即头指针*/
//	NodePointer getHead();
//protected:
//	NodePointer head;		//非循环单链表的头指针
//};
//
///*取第一个结点的指针，即头指针*/
//template<typename ElementType>
//LinkList<ElementType>::NodePointer LinkList<ElementType>::getHead()
//{
//	return head;
//}
//
//int main()
//{
//
//}