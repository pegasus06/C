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
//求任意正整数除了自身以外的最大因数
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
//对于任意的m（m>0)个实数，求介于a和b（a<b)之间的所有实数的个数n和平均数ave。
//int main()
//{
//	float a, b, x;
//	       float ave = 0;
//	       int m, n = 0;
//	label:
//	printf("请输入实数的个数\n");
//	scanf("%d",&m);
//	if (m <= 0)
//	{
//		printf("输入无效\n");
//		goto label;
//	}
//	label2:
//	printf("请输入范围a和b\n");
//	scanf("%f%f",&a,&b);
//	if (a >= b)
//	{
//		printf("输入无效，a<b\n");
//		goto label2;
//	}
//	printf("请依次输入%d个实数\n",m);
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
//	printf(" 有效数字为%d",n);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//   void main()
//   {   float a, b, x;
//       float ave = 0;
//       int m, n = 0;
//
//       printf("请输入实数个数？");
//       scanf("%d", &m);
//      if (m <= 0)
//      {   printf("个数无效！\n");
//         exit(0);
//     }
//      printf("请输入有效范围的上下界（格式为:a,b）？");
//     scanf("%f,%f", &a, &b);
//      if (a >= b)
//      {   printf("范围无效！\n");
//          exit(0);
//      }
//
//      printf("依次输入%d个实数（用空白分开）：\n", m);
//      while (m > 0)
//     {   scanf("%f", &x);
//			if (x > a && x < b)
//         {   ave += x;
//             n++;
//         }
//          m--;
//	  }
//     if (!n)printf("没有有效的数字。\n");
//     else printf("共有%d个有效数字，平均值为%f\n", n, ave / n);
//
//   }
//数组a中有5个数，在第一个数前面插入一个数x，保持5个数的前后关系不变
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
//某班有5个同学参加了考试，求他们的平均成绩，并打印低于平均成绩的成绩列表
//int main()
//{
//	int score[5] = { 1,2,3,4,5 };
//	float sum = 0;int i;
//	for (i = 0; i < 5; i++)
//	{
//		sum += score[i];
//	}
//	printf("平均成绩为%f\n",sum/5);
//	for (i = 0; i < 5; i++)
//	{
//		if (score[i] < (sum / 5))
//			printf("低于平均成绩%d\n", score[i]);
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
//求二维数组的最大值和下标{1 4 7 2 1 2 5 0 8 1 3 1 }
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
//实现数组倒置
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
//在数组中任意位置插入一个新元素
//int main()
//{
//	int arr[100];//要处理的数组
//	int i, l, x, n;//插入的位置，插入的数字，插入前数字数量
//	int* p;
//	label:
//	printf("插入前的数字为多少？");
//	scanf("%d", &n);
//	if (n < 0 || n>99)
//	{
//		goto label;
//	}
//	printf("顺序输入个数为%d",n);
//	p = arr;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", p++);//输入一个数，并让p的指针往后移动一位
//	}
//	printf("要输入的数字是？\n");
//	scanf("%d", &x);
//	printf("插入第几个数字后面？\n");
//	scanf("%d",&l);
//	for (i = n; i > 1; i--)//将1-n位向后移动一位
//	{
//		*p = *(p - 1);//右移数值
//		p--;//左移指针
//	}
//	*p = x;//循环结束时，p指向第一位
//	printf("插入后的结果为？");
//	for (i = 0; i <= n; i++)
//	{
//		printf("%5d", *p++);//输出*p，并右移指针
//	}
//	return 0;
//}
//#include<stdio.h>
//#define N 100
//void main()
//{
//	int iList[N];           /*存放要处理的数列*/
//	int *p;
//	int i, l, x, n;            /*l为插入位置，x为要插入的数，n为数值个数*/
//	printf("插入前数字个数(1～%d)为？", N - 1);
//	do scanf("%d", &n);
//	while (n<1 || n>N - 1);      /*限制n的取值*/
//	printf("顺序输入%d个数：", n);
//	p = iList;                /*p指向第1位*/
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", p++);
//	}/*输入一个数，并右移指针*/ /*循环结束时p指向第n位，对应iList[n]（没有输入）*/
//	printf("要插入的数是？");
//	scanf("%d", &x);
//	printf("插入到第几个数的后面？");
//	scanf("%d", &l);
//	for (i = n; i > l; i--)        /*将第l～n位数值后移一位*/
//	{
//		*p = *(p - 1);          /*右移数值*/
//		p--;                /*左移指针*/
//	}
//	*p = x;                   /*循环结束时，p指向第l位*/
//	printf("插入后的结果为：");
//	p = iList;                /*p重新指向第1位*/
//	for (i = 0; i <= n; i++)
//		printf("%5d", *p++); /*输出*p，并右移指针*/
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
//	printf("请输入一句话");
//	scanf("%s", world);
//	while (world[0] != '#')
//	{
//		i++;
//		scanf("%s",world);
//	}
//	printf("一共输入了%d个单词",i);
//	return 0;
//}
//int main()
//{
//	char str[256];
//	int i = 0, count = 0;
//	puts("输入一句话");
//	gets(str);
//	for (i = 0; str[i] != 0; i++)
//	{
//		count++;
//	}
//	puts("输入的句子是：");
//	puts(str);
//	printf("共包含%d个字母",count);
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
//};//MALE,FEMALE,SECRET-枚举常量
//int main()
//{
//	enum Sex s = FEMALE;//语法 enum+类+变量=枚举常量
//	s = SECRET;
//	s = 5;//枚举类型创建的变量可以更改
//	//SECRET = 5;//错误，枚举常量无法更改
//	printf("%d", MALE);//默认0，不可变
//	printf("%d", FEMALE);//默认1
//	printf("%d", SECRET);//默认2
//	printf("%d", s);//输出5
//	return 0;
//}
#include <stdio.h>
enum Sex
{
	MALE=1,
	FEMALE=3,
	SECRET
}a,b,c;//MALE,FEMALE,SECRET-枚举常量
int main()
{
	a = 8;
	printf("%d", MALE);//默认0，不可变
	printf("%d", FEMALE);//默认1
	printf("%d", SECRET);//默认2
	printf("%d",a);
	return 0;
}