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
////		printf ("����\n");
////	}
////
////	if (a < 60)
////	{
////		printf ("������\n");
////	}
////
////	///////////////////////////////////
////
////	if (b >= 60)
////	{
////		printf ("����\n");
////	}
////	else
////	{
////		printf ("������\n");
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
////���ݲ��뺯��
//Sqlist Insert_List(Sqlist List, ElemType location, ElemType insert);
////���ݲ��Һ���
//int Search(Sqlist List, ElemType search);
////����ɾ������
//Sqlist Delete_data(Sqlist List, ElemType del);
//Sqlist Delete(Sqlist List, ElemType dela);
////�����޸ĺ���
//Sqlist Change_List(Sqlist List, ElemType revamp, ElemType change);
////������
//Sqlist Sort_List(Sqlist L);
////�����
//void ShowOrder();
//
//
//
//
////���뺯��
//Sqlist Insert_List(Sqlist List, ElemType location, ElemType insert)
//{
//	int k;
//	if (location<1 || location>List.length + 1)
//	{ 
//		printf("����Error!\n ԭ������λ:\n");
//	}
//	else
//	{
//		//����ռ�
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
////���Һ���  
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
////ɾ�����ݺ�����һ
//Sqlist Delete_data(Sqlist List, ElemType del)
//{
//
//	if (del<1 || del>List.length)
//		printf("����Error!");
//	for (; del<List.length - 1; del++)
//	{
//		List.elem[del - 1] = List.elem[del];
//		//�ڼ���λ�ã�����-1����
//	}
//	List.length--;
//	return List;
//}
////ɾ�����ݷ���
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
////�޸ĺ���
//Sqlist Change_List(Sqlist List, ElemType revamp, ElemType change)
//{
//	if (revamp<1 || revamp>List.length)
//		printf("����Error!");
//	List.elem[revamp - 1] = change;
//	return List;
//}
//
//
////������
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
////�������
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
////�����
//void ShowOrder()
//{
//	printf("\t*************˳������ϵͳ**************\n");
//	printf("\t*********  ^���ȴ���һ��˳���^  ********\n");
//	printf("\t************  1.����˳���   ************\n");
//	printf("\t************  2.��������   ************\n");
//	printf("\t************  3.��������   ************\n");
//	printf("\t************  4.ɾ������   ************\n");
//	printf("\t************  5.�޸�����   ************\n");
//	printf("\t************  6.�˳�ϵͳ   ************\n");
//}
//
//
//
////������
//int main()
//{
//	Sqlist List,List1,List2;			//����ṹ�����
//	List.length = 0;//��ʼ��
//	int i,m;
//	int location, insert;    //���붨��
//	int search, search2;	//���Ҷ���
//	int del,mmp,temp;			//ɾ����������
//	int revamp,change;      //�޸Ķ���
//	int fo;					//������
//	int nOrder = -1;
//	int flag=1;
//
//	ShowOrder();
//	while (flag)
//	{
//		printf("������ָ��(1-5)�鿴ָ��:");
//		scanf_s("%d", &nOrder);
//		switch (nOrder)
//		{
//		case 1:
//			printf("����������Ԫ�ظ���m:");
//			scanf_s("%d", &m);
//			printf("������˳���Ԫ��%d��(�ո�ע��):", m);
//			for (List.length = 1, i = 0; i< m; i++)
//			{
//				scanf_s("%d", &List.elem[i]);
//				List.length++;
//			}
//			break;
//		case 2:
//			printf("������Ҫ�����λ��location:");
//			scanf_s("%d", &location);
//			printf("����Ҫ�������ֵinsert:");
//			scanf_s("%d", &insert);
//			List1 = Insert_List(List, location, insert);
//			printf("������˳�����:\n");
//			//�����������
//			Cout_List(List1);
//			printf("^^^�Ƿ��������(1/0)^^^:\n\n");
//			scanf_s("%d", &fo);
//			if (fo == 1)
//			{
//				List2= Sort_List(List1);
//				Cout_List(List2);
//			}
//			else
//			{
//				printf("ԭ����:\n");
//				Cout_List(List1);
//			}
//			break;
//		case 3:
//			printf("��������Ҫ���ҵ�����search:");
//			scanf_s("%d", &search);
//			search2 = Search(List, search);
//			printf("���Һ�Ľ��:\n");
//			if (search2 == 0)
//			{
//				printf("��˳�����û������Ҫ���ҵ�ֵ��\n");
//			}
//			else
//			{
//				printf("���ҵ�!\n  λ���ڵ�%dλ\n", search2);
//			}
//			break;
//
//		case 4:
//			printf("\t������ʹ��ɾ����һ������temp:\n");
//			printf("\t***����һ��ɾ���ڼ���λ�ã�***\n");
//			printf("\t***��������ɾ����֪ȷ����ֵ��***\n");
//			scanf_s("%d", &temp);
//			switch (temp)
//			{
//			case 1:
//				printf("������Ҫɾ���ڼ���λ�õ���del:");
//				scanf_s("%d", &del);
//				List = Delete_data(List, del);
//				printf("ɾ���������Ϊ:\n");
//				Cout_List(List);
//				break;
//			case 2:
//				printf("������Ҫɾ����mmp:");
//				scanf_s("%d", &mmp);
//				List = Delete(List, mmp);
//				printf("ɾ���������Ϊ:\n");
//				Cout_List(List);
//				break;
//			default:
//				printf("����������������������!\n");
//				break;
//			}
//			break;
//		case 5:
//			printf("����������Ҫ�޸ĵڼ���Ԫ��revamp:");
//			scanf_s("%d", &revamp);
//			printf("��������ı�����ֵchange:");
//			scanf_s("%d", &change);
//			List = Change_List(List, revamp, change);
//			printf("�޸ĺ��˳�����:\n");
//			Cout_List(List);
//			break;
//		case 6:
//			exit(0);
//			break;
//		default:
//			printf("����������������������!\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
