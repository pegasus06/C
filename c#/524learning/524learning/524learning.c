//#include <stdio.h>
////#include <Windows.h>
////int main()
////{
////	int i=0;
////	scanf("%d",&i);
////	if(i>=1900&&i<=2020)
////	{
////		if((i%4==0&&i%100!=0)||i%400==0)
////		{
////			printf("%d������\n",i);
////		}
////		else
////		{
////		printf("%d��������\n",i);
////		}
////	}
////	else
////	{
////		printf("����������\n");
////		}
////	return 0;
////}
////#include <stdio.h>
////int main()
////{
////	int i=0;
////	int s=0;
////	while(i<=100)
////	{
////		s=s+i;
////		i++;
////	}
////	printf("%d",s);
////	return 0;
////}
////#include <stdio.h>
////int main() {char c[]="abc"; int i=0; do ;while(c[i++]!='\0');printf("%d",i-1); 
////return 0;
////}
////#include <stdio.h>
////#include <stdlib.h>
////void f(int n)
////{
////        if(n==2)
////		{
////			return;
////		}
////        printf("%d" ,n);
////        f(n-1);
////        printf("%d" ,n);
////}
////
////void main()
////
////{   
////	f(7);
////	system("pause");
////}
//
//#include <stdio.h>
//
//#include <stdlib.h>
//
//#include <string.h>
//
//void main()
//{
//	int i,a[5];
//	for(i = 1;i <= 5;i++)
//	{
//		a[i] = i * 10;
//	}
//	for(i = 1;i <= 5;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	system("pause");
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	float b = 10.0;
//	return 0;
//}
//#include <stdio.h>
//
//#include <stdlib.h>
//
//#include <string.h>
//
//void main()
//{
//	int i, a[5];
//	for (i = 0; i <= 4; i++)
//	{
//		a[i] = i * 10;
//	}
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	system("pause");
//}
//��������д�Ƿ���ȷ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//void main()
//{
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	printf("%d", a[2][2]);
//	system("pause");
//
//}
//��������д�Ƿ���ȷ����

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int a[][3] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", a[3][0]);
//	system("pause");
//}
//#include <stdio.h>
//void main()
//{
//	int i;
//	int a[][3] = { 1,2,3,4,5,6 };
//	int a[][3] = { {1,2},{0} };
//	int a[2][3] = { 0 };
//	system("pause");
//}
//��һ����10��Ԫ�ص�����a�У��ҳ�ֵ����Ԫ�ؼ���λ�á�
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a[10] = { 1,2,5,8,4,7,5,6,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (a[0] < a[i])
//		{
//			;
//		}
//		else
//		{
//			printf("����Ԫ����%d,�±���%d",a[0],i);
//		}
//	}
//}���ݴ洢
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}
//int main()
//{
//	char* p = "sasasfasf";
//	printf("%c", *p);
//	printf("%s", p);//p����Ԫ�صĵ�ַ����p�ĵ�ַ����ʼ��ӡ
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//		//if (arr1 == arr2)//������Ԫ�ص�ַ���ڴ��ַ��ͬ
//	if(p1==p2)//ָ��ͬһ����ַ
//	{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//		return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int arr3[] = { 11,12,1,3,4 };
//	int* p[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",*(p[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//pΪ����ָ�룬��10��ָ��10��Ԫ�أ�ÿ��Ԫ��int����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", (*p)[i]);
//	}
//	return 0;
//}
//void print(int (*p)[5],int x,int y) 
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i)+j));//(*(p+j))[j];
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr,3,5);
//	return 0;
//}

