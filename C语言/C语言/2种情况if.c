////#include <stdio.h>
////#include <stdlib.h>
////
////int main(void)
////{
////	int a = 70;
////	int b = 50;
////
////	if (a >= 60)
////	{
////		printf ("及格\n");
////	}
////
////	if (a < 60)
////	{
////		printf ("不及格\n");
////	}
////
////	///////////////////////////////////
////
////	if (b >= 60)
////	{
////		printf ("及格\n");
////	}
////	else
////	{
////		printf ("不及格\n");
////	}
////
////
////	system("pause");
////	return 0;
////}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#define SIZE 50
//typedef int ElemType;
//typedef struct
//{
//	ElemType elem[SIZE];
//	ElemType length;
//
//}Sqlist;
//
////数据插入函数
//Sqlist Insert_List(Sqlist List, ElemType location, ElemType insert);
////数据查找函数
//int Search(Sqlist List, ElemType search);
////数据删除函数
//Sqlist Delete_data(Sqlist List, ElemType del);
//Sqlist Delete(Sqlist List, ElemType dela);
////数据修改函数
//Sqlist Change_List(Sqlist List, ElemType revamp, ElemType change);
////排序函数
//Sqlist Sort_List(Sqlist L);
////命令函数
//void ShowOrder();
//
//
//
//
////插入函数
//Sqlist Insert_List(Sqlist List, ElemType location, ElemType insert)
//{
//	int k;
//	if (location<1 || location>List.length + 1)
//	{ 
//		printf("错误Error!\n 原来数组位:\n");
//	}
//	else
//	{
//		//扩大空间
//		for (k = List.length - 1; k >= location - 1; k--)
//		{
//			List.elem[k + 1] = List.elem[k];
//		}
//		List.elem[location - 1] = insert;
//		List.length++;
//
//	}
//	return List;
//
//}
//
////查找函数  
//int Search(Sqlist List, ElemType search)
//{	
//	int s;
//	for (s = 0; s<List.length&&List.elem[s] != search; s++);
//	if (s<List.length)
//		return s + 1;
//	else
//		return 0;
//
//}
////删除数据函数法一
//Sqlist Delete_data(Sqlist List, ElemType del)
//{
//
//	if (del<1 || del>List.length)
//		printf("错误Error!");
//	for (; del<List.length - 1; del++)
//	{
//		List.elem[del - 1] = List.elem[del];
//		//第几个位置，（第-1）；
//	}
//	List.length--;
//	return List;
//}
////删除数据法二
//Sqlist Delete(Sqlist List, ElemType dela)
//{
//	int i=0,v;
//	for (int j = 0; j < List.length - 1; j++)
//	{
//		if (List.elem[j] == dela)
//		{
//			for (v = j; v < List.length - 1; v++)
//			{
//				List.elem[v] = List.elem[v + 1];
//			}
//			List.length--;
//		}
//	}
//
//	return List;
//
//}
//
////修改函数
//Sqlist Change_List(Sqlist List, ElemType revamp, ElemType change)
//{
//	if (revamp<1 || revamp>List.length)
//		printf("错误Error!");
//	List.elem[revamp - 1] = change;
//	return List;
//}
//
//
////排序函数
//Sqlist Sort_List(Sqlist List1)
//{
//	int s,p, sort;
//	for (s = 0; s < List1.length-1; s++)
//	{
//		int k = s;
//		for (p = s + 1; p < List1.length; p++)
//			if (List1.elem[p] < List1.elem[k])
//			{
//				k = p;
//			}
//
//			if (k != s)
//			{
//				sort = List1.elem[s];
//				List1.elem[s] = List1.elem[k];
//				List1.elem[k] = sort;
//			}
//	}
//	return List1;
//}
//
//
//
////输出函数
//void Cout_List(Sqlist L)
//{
//	int i;
//	for (i = 0; i<L.length - 1; i++)
//	{
//		printf("%3d", L.elem[i]);
//	}
//	printf("\n");
//}
//
////命令函数
//void ShowOrder()
//{
//	printf("\t*************顺序表管理系统**************\n");
//	printf("\t*********  ^请先创建一个顺序表^  ********\n");
//	printf("\t************  1.创建顺序表   ************\n");
//	printf("\t************  2.插入数据   ************\n");
//	printf("\t************  3.查找数据   ************\n");
//	printf("\t************  4.删除数据   ************\n");
//	printf("\t************  5.修改数据   ************\n");
//	printf("\t************  6.退出系统   ************\n");
//}
//
//
//
////主函数
//int main()
//{
//	Sqlist List,List1,List2;			//定义结构体对象
//	List.length = 0;//初始化
//	int i,m;
//	int location, insert;    //插入定义
//	int search, search2;	//查找定义
//	int del,mmp,temp;			//删除方法定义
//	int revamp,change;      //修改定义
//	int fo;					//排序定义
//	int nOrder = -1;
//	int flag=1;
//
//	ShowOrder();
//	while (flag)
//	{
//		printf("请输入指令(1-5)查看指令:");
//		scanf_s("%d", &nOrder);
//		switch (nOrder)
//		{
//		case 1:
//			printf("请输入数组元素个数m:");
//			scanf_s("%d", &m);
//			printf("请输入顺序表元素%d个(空格注意):", m);
//			for (List.length = 1, i = 0; i< m; i++)
//			{
//				scanf_s("%d", &List.elem[i]);
//				List.length++;
//			}
//			break;
//		case 2:
//			printf("请输入要插入的位置location:");
//			scanf_s("%d", &location);
//			printf("输入要插入的数值insert:");
//			scanf_s("%d", &insert);
//			List1 = Insert_List(List, location, insert);
//			printf("插入后的顺序表是:\n");
//			//调用输出函数
//			Cout_List(List1);
//			printf("^^^是否进行排序(1/0)^^^:\n\n");
//			scanf_s("%d", &fo);
//			if (fo == 1)
//			{
//				List2= Sort_List(List1);
//				Cout_List(List2);
//			}
//			else
//			{
//				printf("原数组:\n");
//				Cout_List(List1);
//			}
//			break;
//		case 3:
//			printf("请输入你要查找的数据search:");
//			scanf_s("%d", &search);
//			search2 = Search(List, search);
//			printf("查找后的结果:\n");
//			if (search2 == 0)
//			{
//				printf("该顺序表中没有你索要查找的值！\n");
//			}
//			else
//			{
//				printf("已找到!\n  位置在第%d位\n", search2);
//			}
//			break;
//
//		case 4:
//			printf("\t请输入使用删除哪一个方法temp:\n");
//			printf("\t***方法一（删除第几个位置）***\n");
//			printf("\t***方法二（删除已知确定数值）***\n");
//			scanf_s("%d", &temp);
//			switch (temp)
//			{
//			case 1:
//				printf("请输入要删除第几个位置的数del:");
//				scanf_s("%d", &del);
//				List = Delete_data(List, del);
//				printf("删除后的数组为:\n");
//				Cout_List(List);
//				break;
//			case 2:
//				printf("请输入要删除数mmp:");
//				scanf_s("%d", &mmp);
//				List = Delete(List, mmp);
//				printf("删除后的数组为:\n");
//				Cout_List(List);
//				break;
//			default:
//				printf("输入命令有误，请重新输入!\n");
//				break;
//			}
//			break;
//		case 5:
//			printf("请输入你想要修改第几个元素revamp:");
//			scanf_s("%d", &revamp);
//			printf("请输入你改变后的数值change:");
//			scanf_s("%d", &change);
//			List = Change_List(List, revamp, change);
//			printf("修改后的顺序表是:\n");
//			Cout_List(List);
//			break;
//		case 6:
//			exit(0);
//			break;
//		default:
//			printf("输入命令有误，请重新输入!\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
