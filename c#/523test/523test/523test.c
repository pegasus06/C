#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void bubble_sort(int arr[],int sz)//确定趟数
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0;j<sz-i-1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,12,3 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;//p指向的范围超过了数组arr的范围时，p是野指针
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//先vp++
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d",&arr[9]-&arr[0]);
//	return 0;
//}
//int mystrlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len=mystrlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//#define n_values 5
//int main()
//{
//	int values[n_values];
//	int *vp;
//	for (vp = &values[n_values]; vp < &values[0];)
//	{
//		*--vp = 0;
//	}
//	printf("%d", values);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[3] = { pa,pb,pc };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,6,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d",*p);
//		p++;
//	}
//}
// 描述一个学生的数据，名字，年龄，电话，性别
//typedef struct stu   //struct结构体关键字   stu结构体标签  //定义结构体类型
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//typedef给结构体类型取别名stu
//int main()
//{
//	stu s;//创建结构体局部变量
//	return 0;
//}
//struct Point
//{
//	int x;
//	int y;
//}p1;
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct t
//{
//	char ch[10];
//	struct s v;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello,world";
//	struct t f = { "hello",{10,'d',"yes",3.154},arr };
//	printf("%s\n", f.ch);
//	printf("%d\n", f.v.a);
//	printf("%c\n", f.v.c);
//	printf("%s\n", f.v.arr);
//	printf("%lf\n", f.v.d);
//	printf("%s\n", f.pc);
//	return 0;
//}
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print(Stu temp)
{
	printf("%s\t", temp.name);
	printf("%d\t", temp.age);
	printf("%s\t", temp.tele);
	printf("%s\n", temp.sex);
}
void Print1(Stu* temp)
{
	printf("%s\t", temp->name);//指针结构体传参，必须使用->
	printf("%d\t", temp->age);
	printf("%s\t", temp->tele);
	printf("%s\n", temp->sex);
}
int main()
{
	Stu s = { "李四",20,"15371911176","男" };
	Print(s);
	Print1(&s);
	return 0;
}