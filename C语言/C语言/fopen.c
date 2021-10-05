//#define _CRT_SECURE_NO_DEPRECATE
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stddef.h>
////
////struct Node
////{
////	int Num;
////	char name[10];
////	double hig;
////	short age;
////};
//
//int main(void)
//{
//	int a = 12;
//	&*a;
////	long a;
////
////	FILE *pFile = fopen("qwe.txt","r");// r w a  
////
////	char str[20] = {0};
////	fread(str, 1, 7, pFile);
////
////	fseek(pFile, 0L, SEEK_END);
////	a = ftell(pFile);
////
////	printf("%d\n", a);
///////	printf("\n");
////	//fseek(pFile, -3L, SEEK_CUR);
////
////	//fread(str, 1, 7, pFile);
////	//printf(str);
////
////	fclose(pFile);
//	//fwrite("qwe", 1, 3, pFile);
//	
//	//fprintf(pFile, "%d,%s %.2lf",12, "helloc3", 12.34);
//	//int a = 0;
//	//char str[20] = {0};
//	//double d = 0.0;
//	//fscanf(pFile, "%d,%s %lf", &a, str, &d);
//
//	//fclose(pFile); //关闭文件  保存   保存 
//
//	//fputs("hello\n", pFile);
//	//fputs("c3", pFile);
//	//char str[10] = {0};
//	//fgets(str, 10, pFile);
//	//fgets(str, 10, pFile);
//	
//	//struct Node no = {123, "c3", 190, 28};
//	//struct Node no1 ;
//	////fwrite(&no, sizeof(no), 1, pFile);
//	////fwrite("\n", 1, 1, pFile);
//
//	//fread(&no1, sizeof(no1), 1, pFile);
//	//char str[20] = {0};
//
//	//while (!feof(pFile))
//	//{
//	//	a = fread(str, sizeof(char), 2, pFile);
//	//	printf (str);
//	//	str[0] = 0;
//	//	str[1] = 0;
//	//}
//
//	//char *str = "hello c3~";
//	////char str1 = '\n';
//	//char *str1 = "\r\n";
//	//char *str2 = "hello world";
//	//fwrite(str, sizeof(char), strlen(str)+1, pFile);
//	////fwrite(&str1, sizeof(char), 1, pFile);
//	//fwrite(str1, sizeof(char), 2, pFile);
//	//fwrite(str2, sizeof(char), strlen(str2)+1, pFile);
//	////////////a = errno;
//
//	
//	
//	//int a;
//	/*if (pFile == NULL)
//		printf ("文件打开失败");
//	a = errno;*/
//	//fopen_s
//	//FILE *pFile = NULL;
//	//errno_t a = fopen_s(&pFile,"qwe.txt","r");
//
//
//	//printf ("%p,%p\n",sp,str);
//
//	system("pause");
//	return 0;
//}
//


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a =2;
	int c = 3+ a++;
	system("pause");
	return 0;
}
