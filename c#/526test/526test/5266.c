#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int k=1;
//	switch(0)
//	{
//	case 0:printf("1");
//	case 6:printf("3");
//	case 4:printf("3");
//
//	default:printf("s");
//	case 3:printf("3");
//	case 90:printf("3");
//
//	case 9:printf("1");
//
//	}
//	return 0;
//}
//int main()
//{
//	int i,j;
//	for (i = 1; i <=4; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			putchar(' ');
//		}
//		for (j = 1; j <= 6; j++)
//		{
//			putchar('*');
//		}
//			putchar('\n');
//	}
//	return 0;
//}
//void main()
//{
//	char ch;
//	ch = getchar();
//		putchar(ch);
//}
//��������������������������������
//int main()
//{
//	int j,i;
//	pos1:
//	scanf("%d",&i);
//	for (j = i/2; j >0; j--)
//	{
//		if (i%j == 0)
//		{
//			printf("%d", j);
//			goto pos1;
//			break;
//		}
//	}
//	return 0;
//}
//���������m��m>0)��ʵ���������a��b��a<b)֮�������ʵ���ĸ���n��ƽ����ave��
//int main()
//{
//	float a, b, x;
//	       float ave = 0;
//	       int m, n = 0;
//	label:
//	printf("������ʵ���ĸ���\n");
//	scanf("%d",&m);
//	if (m <= 0)
//	{
//		printf("������Ч\n");
//		goto label;
//	}
//	label2:
//	printf("�����뷶Χa��b\n");
//	scanf("%f%f",&a,&b);
//	if (a >= b)
//	{
//		printf("������Ч��a<b\n");
//		goto label2;
//	}
//	printf("����������%d��ʵ��\n",m);
//	while (m > 0)
//	{
//		scanf("%f",&x);
//		if ((x >a) &&(x < b))
//		{
//			ave+=x;
//			n++;
//		}
//		m--;
//	}
//	printf("ave=%f\n", ave / n);
//	printf(" ��Ч����Ϊ%d",n);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//   void main()
//   {   float a, b, x;
//       float ave = 0;
//       int m, n = 0;
//
//       printf("������ʵ��������");
//       scanf("%d", &m);
//      if (m <= 0)
//      {   printf("������Ч��\n");
//         exit(0);
//     }
//      printf("��������Ч��Χ�����½磨��ʽΪ:a,b����");
//     scanf("%f,%f", &a, &b);
//      if (a >= b)
//      {   printf("��Χ��Ч��\n");
//          exit(0);
//      }
//
//      printf("��������%d��ʵ�����ÿհ׷ֿ�����\n", m);
//      while (m > 0)
//     {   scanf("%f", &x);
//			if (x > a && x < b)
//         {   ave += x;
//             n++;
//         }
//          m--;
//	  }
//     if (!n)printf("û����Ч�����֡�\n");
//     else printf("����%d����Ч���֣�ƽ��ֵΪ%f\n", n, ave / n);
//
//   }
//����a����5�������ڵ�һ����ǰ�����һ����x������5������ǰ���ϵ����
#include <stdio.h>
//int main()
//{
//	int data[6];
//	int i = 0;
//	int x = 1;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d",&data[i]);
//	}
//	for (i = 5; i >0; i--)
//	{
//		data[i] = data[i - 1];
//	}
//	data[0] = x;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d", data[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int data[5] = { 2 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", data[i]);
//	}
//	return 0;
//}
//ĳ����5��ͬѧ�μ��˿��ԣ������ǵ�ƽ���ɼ�������ӡ����ƽ���ɼ��ĳɼ��б�
//int main()
//{
//	int score[5] = { 1,2,3,4,5 };
//	float sum = 0;int i;
//	for (i = 0; i < 5; i++)
//	{
//		sum += score[i];
//	}
//	printf("ƽ���ɼ�Ϊ%f\n",sum/5);
//	for (i = 0; i < 5; i++)
//	{
//		if (score[i] < (sum / 5))
//			printf("����ƽ���ɼ�%d\n", score[i]);
//	}
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int arr[3][4] = {0,1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//���ά��������ֵ���±�{1 4 7 2 1 2 5 0 8 1 3 1 }
//int main()
//{
//	int arr[3][4] = { {1,4,7,2},{1,2,5,0},{8,1,3,1} };
//	int i, j,x,y,a=0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > a)
//			{
//				a = arr[i][j];
//				x = i; y = j;
//			}
//		}
//	}
//	printf("%d  %d\n",x,y);
//	printf("%d", a);
//
//}
//int main()
//{
//	int i = 0;
//	int *p = &i;
//	int *q = p;
//	*q = 10;
//	printf("%d",i);
//	return 0;
//}
//int main()
//{
//	int  a[5] = { 1,1,1,3,4 };
//	int* pa = &a;
//	int* pq = &a[2];
//
//		printf("%d",pq-pa);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d", &arr[9] - &arr[0]);
//	return 0;
//}
//ʵ�����鵹��
//#define N 5
//int main()
//{
//	int arr[N] = { 1,2,3,4,0 };
//	int i, t;
//	int* p = arr;
//	int* q = arr + N - 1;
//	while (p < q)
//	{
//		t = *p;
//		*p = *q;
//		*q = t;
//		p++;
//		q--;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%-5d",arr[i]);
//	}
//	return 0;
//}
//������������λ�ò���һ����Ԫ��
//int main()
//{
//	int arr[100];//Ҫ���������
//	int i, l, x, n;//�����λ�ã���������֣�����ǰ��������
//	int* p;
//	label:
//	printf("����ǰ������Ϊ���٣�");
//	scanf("%d", &n);
//	if (n < 0 || n>99)
//	{
//		goto label;
//	}
//	printf("˳���������Ϊ%d",n);
//	p = arr;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", p++);//����һ����������p��ָ�������ƶ�һλ
//	}
//	printf("Ҫ����������ǣ�\n");
//	scanf("%d", &x);
//	printf("����ڼ������ֺ��棿\n");
//	scanf("%d",&l);
//	for (i = n; i > 1; i--)//��1-nλ����ƶ�һλ
//	{
//		*p = *(p - 1);//������ֵ
//		p--;//����ָ��
//	}
//	*p = x;//ѭ������ʱ��pָ���һλ
//	printf("�����Ľ��Ϊ��");
//	for (i = 0; i <= n; i++)
//	{
//		printf("%5d", *p++);//���*p��������ָ��
//	}
//	return 0;
//}
//#include<stdio.h>
//#define N 100
//void main()
//{
//	int iList[N];           /*���Ҫ���������*/
//	int *p;
//	int i, l, x, n;            /*lΪ����λ�ã�xΪҪ���������nΪ��ֵ����*/
//	printf("����ǰ���ָ���(1��%d)Ϊ��", N - 1);
//	do scanf("%d", &n);
//	while (n<1 || n>N - 1);      /*����n��ȡֵ*/
//	printf("˳������%d������", n);
//	p = iList;                /*pָ���1λ*/
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", p++);
//	}/*����һ������������ָ��*/ /*ѭ������ʱpָ���nλ����ӦiList[n]��û�����룩*/
//	printf("Ҫ��������ǣ�");
//	scanf("%d", &x);
//	printf("���뵽�ڼ������ĺ��棿");
//	scanf("%d", &l);
//	for (i = n; i > l; i--)        /*����l��nλ��ֵ����һλ*/
//	{
//		*p = *(p - 1);          /*������ֵ*/
//		p--;                /*����ָ��*/
//	}
//	*p = x;                   /*ѭ������ʱ��pָ���lλ*/
//	printf("�����Ľ��Ϊ��");
//	p = iList;                /*p����ָ���1λ*/
//	for (i = 0; i <= n; i++)
//		printf("%5d", *p++); /*���*p��������ָ��*/
//	return 0;
//}
//int main()
//{
//	char arr[10] = "asda\ndas";
//	printf("%s",arr);
//	return 0;
//}
//int main()
//{
//	int i=0, world[20];
//	printf("������һ�仰");
//	scanf("%s", world);
//	while (world[0] != '#')
//	{
//		i++;
//		scanf("%s",world);
//	}
//	printf("һ��������%d������",i);
//	return 0;
//}
//int main()
//{
//	char str[256];
//	int i = 0, count = 0;
//	puts("����һ�仰");
//	gets(str);
//	for (i = 0; str[i] != 0; i++)
//	{
//		count++;
//	}
//	puts("����ľ����ǣ�");
//	puts(str);
//	printf("������%d����ĸ",count);
//	return 0;
//}
//int main()
//{
//	int p[] = { 1,2,3 };
//	char* a = p;
//	printf("%d",a);
//}
//#include <stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//MALE,FEMALE,SECRET-ö�ٳ���
//int main()
//{
//	enum Sex s = FEMALE;//�﷨ enum+��+����=ö�ٳ���
//	s = SECRET;
//	s = 5;//ö�����ʹ����ı������Ը���
//	//SECRET = 5;//����ö�ٳ����޷�����
//	printf("%d", MALE);//Ĭ��0�����ɱ�
//	printf("%d", FEMALE);//Ĭ��1
//	printf("%d", SECRET);//Ĭ��2
//	printf("%d", s);//���5
//	return 0;
//}
#include <stdio.h>
enum Sex
{
	MALE=1,
	FEMALE=3,
	SECRET
}a,b,c;//MALE,FEMALE,SECRET-ö�ٳ���
int main()
{
	a = 8;
	printf("%d", MALE);//Ĭ��0�����ɱ�
	printf("%d", FEMALE);//Ĭ��1
	printf("%d", SECRET);//Ĭ��2
	printf("%d",a);
	return 0;
}