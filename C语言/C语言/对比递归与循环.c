//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _Tree
//{
//	int nValue;
//	struct _Tree* pLeft;    //  左右子树
//	struct _Tree* pRight;
//}Tree;
//
//Tree *root = NULL;
//
//typedef struct _Stack
//{
//	Tree* tree;   //  装树的节点
//	struct _Stack* pNext;
//}Stack;
//
//
//Stack* pTop = NULL;
//
//
//void Push_Front(Tree* tree)   //  入栈
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
//		while(tree)    //  把当前这个节点的  所有的左放到栈里
//		{
//			//  遍历根
//			printf("%d ",tree->nValue);
//			//  栈里存的是左子树
//			Push_Front(tree);
//			tree = tree->pLeft;
//		}
//
//		//  从栈 去出来一个节点  //  要遍历右子树
//		tree = Pop_Front();
//
//		if (!tree)   // 这个树遍历完了
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
//		//  遍历左子树
//		Qian(tree->pLeft); 
//		//  遍历右子树
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
//		while(tree)    //  把当前这个节点的  所有的左放到栈里
//		{
//
//			//  栈里存的是左子树
//			Push_Front(tree);
//			tree = tree->pLeft;
//		}
//		//  从栈 去出来一个节点  //  要遍历右子树
//		tree = Pop_Front();
//		if (!tree)   // 这个树遍历完了
//		{
//			return;
//		}
//		//  遍历根
//		printf("%d ",tree->nValue);
//		tree = tree->pRight;
//	}
//}
//
//
//void Hou(Tree* tree)
//{
//	Tree* bj = NULL;     //  记住 从栈中取出来的那个遍历过的节点
//
//
//	while(1)
//	{
//		while(tree)   //  把所有的左 都放到栈
//		{
//			Push_Front(tree);
//			tree = tree->pLeft;
//		}
//
//		if (pTop != NULL)
//		{
//			//  拿栈顶元素去判断  有没有右
//			if(pTop->tree->pRight == NULL || pTop->tree->pRight == bj)
//			{
//				//  出栈
//				bj = Pop_Front();
//				printf("%d ",bj->nValue);
//			}
//			else
//			{
//				//  遍历右子树
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
////		//  看从 队列取出来的这个节点有没有左右
////		if (tree->pLeft)
////		{
////			//  把它放到队列
////			Push_Front(tree->pLeft);
////		}
////		if (tree->pRight)
////		{
////			//  把它放到队列
////			Push_Front(tree->pRight);
////		}
////		//   从队列拿出来一个节点
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