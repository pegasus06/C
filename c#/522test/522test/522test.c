#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 7;
//	while (left<=right)
//	{
//		int midden = (right + left) / 2;
//		if (arr[midden] > k)
//		{
//			right = midden - 1;
//		}
//		else if (arr[midden] < k)
//		{
//			left = midden + 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d",midden);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���");
//
//	}
//	return 0;
//}
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");//��ղ��� �⺯�� <stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}
#include <string.h>
//int main()
//{
//	int i = 0;
//	char arr[] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", arr);
//		if (strcmp(arr, "123456")==0)//==����ʹ�õ��ڱȽ��ַ���
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//		printf("���������");
//	return 0;
//}
//д���뽫�������Ӵ�С���
//#include <stdio.h>
//int main()
//{
//	int a=0, b=0, c=0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (b > a)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}
////дһ�������ӡ1-100֮������3�ı���������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\t", i);
//	}
//	return 0;
//}
//���������������������������Լ��,շת�����
//#include <stdio.h>
//int main()
//{
//	int m = 36; int n = 24,r=0;
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}
//��ӡ1000-2000֮�������,1.�ܱ�4�������Ҳ��ܱ�100����2.�ܱ�400����
//#include <stdio.h>
//int main()
//{
//	int i = 0; int count = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0) && ((i % 100) != 0))
//		{
//			printf("%d\t", i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d\t", i);
//			count++;
//		}
//	}
//	printf("��%d������", count);
//	return 0;
//}
//��ӡ100��200֮����������Գ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		int n = 0;
//		for (n = 2; n <i; n++)
//		{
//			if (i%n == 0)
//				break;
//		}
//		if (n == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	//i=a*b   a��b����һ������С��i�Ŀ�ƽ��
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int n = 0;
//		for (n = 2; n <= sqrt(i); n++)
//		{
//			if (i%n== 0)
//			{
//				break;
//			}
//		}
//		if (n > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//1-100�ж��ٸ�9
//#include <stdio.h>
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1; i <100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//}
//����1/1-1/2+1/3-1/4-1/5+....+1/99-1/100
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double a = 0;
//	double t = 0;
//	double s = 0;
//	for (i = 1; i < 101; i += 2)
//	{
//		s = 1.0/ i + s;
//	}
//	for(i=2;i<101;i+=2)
//	{
//		t = 1.0 / i + t;
//	}
//	a = s - t;
//	printf("%lf", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i < 101; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-18,-8,-9,-10 };
//	int i = 0; int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i=1;i<=sz;i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//���9*9�˷��ھ���
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0,s=0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < i+1; j++)
//		{
//			s = i * j;
//			printf("%d*%d=%d\t",i,j,s);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��������Ϸ
//1.���Ի�����һ�������
//2.������
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("####################\n");
	printf("***1.play  0.exit***\n");
	printf("####################\n");

}
void game()
{
	int ret = rand();		//1.����һ�������
	printf("���֣�%d\n",rand);
}
int main()
{
	int input = 0;
	do {
		menu();
		printf("������һ������\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}