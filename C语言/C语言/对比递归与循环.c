//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _Tree
//{
//	int nValue;
//	struct _Tree* pLeft;    //  ��������
//	struct _Tree* pRight;
//}Tree;
//
//Tree *root = NULL;
//
//typedef struct _Stack
//{
//	Tree* tree;   //  װ���Ľڵ�
//	struct _Stack* pNext;
//}Stack;
//
//
//Stack* pTop = NULL;
//
//
//void Push_Front(Tree* tree)   //  ��ջ
//{
//	Stack* temp = (Stack*)malloc(sizeof(Stack));
//	temp->tree = tree;
//
//	temp->pNext = pTop;
//	pTop = temp;
//}
//
//
//Tree* Pop_Front()
//{
//	if (!pTop)
//	{
//		return NULL;
//	}
//	else
//	{
//		Stack* pDel = pTop;
//		Tree* tree = pTop->tree;
//		pTop = pTop->pNext;
//		free(pDel);
//		return tree;
//	}
//}
//
//void Qian(Tree* tree)
//{
//	while(1)
//	{
//		while(tree)    //  �ѵ�ǰ����ڵ��  ���е���ŵ�ջ��
//		{
//			//  ������
//			printf("%d ",tree->nValue);
//			//  ջ������������
//			Push_Front(tree);
//			tree = tree->pLeft;
//		}
//
//		//  ��ջ ȥ����һ���ڵ�  //  Ҫ����������
//		tree = Pop_Front();
//
//		if (!tree)   // �������������
//		{
//			return;
//		}
//		tree = tree->pRight;
//	}
//}
//
//void Qian(Tree* tree)   
//{
//	if (tree)
//	{
//		printf("%d ",tree->nValue);
//		//  ����������
//		Qian(tree->pLeft); 
//		//  ����������
//		Qian(tree->pRight);
//
//	}
//}
//
//
//void Zhong(Tree* tree)
//{
//	while(1)
//	{
//		while(tree)    //  �ѵ�ǰ����ڵ��  ���е���ŵ�ջ��
//		{
//
//			//  ջ������������
//			Push_Front(tree);
//			tree = tree->pLeft;
//		}
//		//  ��ջ ȥ����һ���ڵ�  //  Ҫ����������
//		tree = Pop_Front();
//		if (!tree)   // �������������
//		{
//			return;
//		}
//		//  ������
//		printf("%d ",tree->nValue);
//		tree = tree->pRight;
//	}
//}
//
//
//void Hou(Tree* tree)
//{
//	Tree* bj = NULL;     //  ��ס ��ջ��ȡ�������Ǹ��������Ľڵ�
//
//
//	while(1)
//	{
//		while(tree)   //  �����е��� ���ŵ�ջ
//		{
//			Push_Front(tree);
//			tree = tree->pLeft;
//		}
//
//		if (pTop != NULL)
//		{
//			//  ��ջ��Ԫ��ȥ�ж�  ��û����
//			if(pTop->tree->pRight == NULL || pTop->tree->pRight == bj)
//			{
//				//  ��ջ
//				bj = Pop_Front();
//				printf("%d ",bj->nValue);
//			}
//			else
//			{
//				//  ����������
//				tree = pTop->tree->pRight;
//			}
//		}
//		else
//			return;
//
//	}
//}
//
//
////void Ceng(Tree* tree)
////{
////	while(tree)
////	{
////		printf("%d ",tree->nValue);
////		//  ���� ����ȡ����������ڵ���û������
////		if (tree->pLeft)
////		{
////			//  �����ŵ�����
////			Push_Front(tree->pLeft);
////		}
////		if (tree->pRight)
////		{
////			//  �����ŵ�����
////			Push_Front(tree->pRight);
////		}
////		//   �Ӷ����ó���һ���ڵ�
////		tree = Pop_Front();
////	}
////}
//
//int main()
//{
//
//	CreateTree();
//	Qian(root);
//	printf("\n");
//	Zhong(root);
//	printf("\n");
//	Hou(root);
//	printf("\n");
//
//	system("pause");
//	return 0;
//}
//
//void CreateTree()
//{
//	root = (Tree*)malloc(sizeof(Tree));
//	root->nValue = 1;
//
//	root->pLeft = (Tree*)malloc(sizeof(Tree));
//	root->pLeft->nValue = 2;
//
//	root->pLeft->pLeft = (Tree*)malloc(sizeof(Tree));
//	root->pLeft->pLeft->nValue = 4;
//	root->pLeft->pLeft->pLeft = NULL;
//	root->pLeft->pLeft->pRight = NULL;
//
//	root->pLeft->pRight = (Tree*)malloc(sizeof(Tree));
//	root->pLeft->pRight->nValue = 5;
//	root->pLeft->pRight->pLeft = NULL;
//	root->pLeft->pRight->pRight = NULL;
//
//
//	root->pRight = (Tree*)malloc(sizeof(Tree));
//	root->pRight->nValue = 3;
//
//	root->pRight->pLeft = (Tree*)malloc(sizeof(Tree));
//	root->pRight->pLeft->nValue = 6;
//	root->pRight->pLeft->pLeft = NULL;
//	root->pRight->pLeft->pRight = NULL;
//
//	root->pRight->pRight = (Tree*)malloc(sizeof(Tree));
//	root->pRight->pRight->nValue = 7;
//	root->pRight->pRight->pLeft = NULL;
//	root->pRight->pRight->pRight = NULL;
//
//}