//#include <stdio.h>
//#include <stdlib.h>
//
//int fun (int a)
//{
//	printf ("����fun\n");
//	return 9;
//}
//
//int fun1 (int a)
//{
//	printf ("����fun\n");
//	printf ("����fun\n");
//	printf ("����fun\n");
//	return 9;
//}
//
//int fun2 (int a,int b)
//{
//	printf ("����fun\n");
//	printf ("����fun\n");
//	printf ("����fun\n");
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
//	/*��ѭ��������Ľ���C++������*/
//	class LinkNode
//	{
//	public:
//		ElementType data;			//����������
//		LinkNode* next;				//����ָ����
//	};
//	
//	typedef LinkNode *NodePointer;		//ָ��ڵ�Ķ�ָ����������
//
//	/*ȡ��һ������ָ�룬��ͷָ��*/
//	NodePointer getHead();
//protected:
//	NodePointer head;		//��ѭ���������ͷָ��
//};
//
///*ȡ��һ������ָ�룬��ͷָ��*/
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