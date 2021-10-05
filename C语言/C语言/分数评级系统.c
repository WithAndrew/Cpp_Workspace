//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	//1、提示欢迎
//	printf ("欢迎使用本系统\n");
//
//	//2、开始，循环
//	while (1)
//	{
//		//3、输入一个数
//		int value = -1;
//		printf ("请输入一个分数(0~100), 输入-1退出系统: ");
//		scanf ("%d", &value);
//		//4、检测这个数
//		//-1  退出
//		if (-1 == value)
//		{
//			break;
//		}
//		//检测分数，不合法就重新输入
//		if (value < 0 || value > 100)
//		{
//			//提示用户重新输入
//			printf ("输入的指令非法，请重新输入\n");
//			continue;
//		}
//		//分数分级
//		if (value < 60)
//		{
//			printf("不及格\n");
//		}
//		else if (value >= 60 && value < 70)
//		{
//			printf("及格\n");
//		}
//		else if (value >= 70 && value < 80)
//		{
//			printf("良\n");
//		}
//		else if (value >= 80 && value < 90)
//		{
//			printf("优\n");
//		}
//		else if (value >= 90 && value <= 100)
//		{
//			printf ("完美\n");
//		}
//	}
//	//5、感谢使用
//	printf ("系统关闭，感谢您的使用\n");
//
//	system("pause");
//	return 0;
//}