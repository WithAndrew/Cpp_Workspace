//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	//1����ʾ��ӭ
//	printf ("��ӭʹ�ñ�ϵͳ\n");
//
//	//2����ʼ��ѭ��
//	while (1)
//	{
//		//3������һ����
//		int value = -1;
//		printf ("������һ������(0~100), ����-1�˳�ϵͳ: ");
//		scanf ("%d", &value);
//		//4����������
//		//-1  �˳�
//		if (-1 == value)
//		{
//			break;
//		}
//		//�����������Ϸ�����������
//		if (value < 0 || value > 100)
//		{
//			//��ʾ�û���������
//			printf ("�����ָ��Ƿ�������������\n");
//			continue;
//		}
//		//�����ּ�
//		if (value < 60)
//		{
//			printf("������\n");
//		}
//		else if (value >= 60 && value < 70)
//		{
//			printf("����\n");
//		}
//		else if (value >= 70 && value < 80)
//		{
//			printf("��\n");
//		}
//		else if (value >= 80 && value < 90)
//		{
//			printf("��\n");
//		}
//		else if (value >= 90 && value <= 100)
//		{
//			printf ("����\n");
//		}
//	}
//	//5����лʹ��
//	printf ("ϵͳ�رգ���л����ʹ��\n");
//
//	system("pause");
//	return 0;
//}