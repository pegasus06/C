////#include<stdio.h>
////void main()
////{float s,sum =0,ave;
////int i,n;
////for(i=1;i<51;i++)
////{scanf("%f",&s);//90��80��80��90��-10
////	if(s<0)break;
////sum+=s;//sum=160+180=340
////}
////n=i-1;//n=5-1=4
////ave=sum/n;//ave=340/4=170/2=85.0
////printf("num=%d,ave=%f\n",n,ave);
////}
//
////int fact(int n);
////int main()
////{
////	int n=0;
////	int s;
////	scanf("%d",&n);
////	s=fact(n);
////	printf("%d",s);
////	return 0;
////}
////int fact(int n)
////{
////	if(n==0)
////	{
////		return 1;
////	}
////	else
////	{
////		return n*fact(n-1);
////	}
////}
////int func(int n);
////int main()
////{
////	int s=0,n;
////	scanf("%d",&n);
////	s=func(n);
////	printf("%d",s);
////	return 0;
////}
////int func(int n)
////{
////	if(n==1)
////	{
////		return 1;
////	}
////	return n*func(n-1);
////}
////int main()
////{
////	int i=0,s=1,n;
////	scanf("%d",&n);
////	for(i=1;i<=n;i++)
////	{
////		s=s*i;
////	}
////	printf("%d",s);
////	return 0;
////}
////��1!+2!+...+100!
//#include <stdio.h>
////int fact(int n);
////int main()
////{
////	int n,sum=0,i;
////	puts("������һ������:");
////	scanf("%d",&n);
////	for(i=1;i<=n;i++)
////	{
////	sum+=fact(i);		
////	}
////	printf("%d",sum);
////	return 0;
////}
////int fact(int n)
////{
////	//��ײ�
////		if(n==1)
////		{
////			return 1;
////		}
////		else
////		{
////		return n*fact(n-1);//3*2*1
////		}
////}
////#include <math.h>
////int main()
////{
////	double i=9;
////	printf("%f",sqrt(pow(i,2)));
////	return 0;
////}
////��������е���Сֵ
////#include <stdio.h>
////int main()
////{
////	int i=0,min;
////	int arr[5]={5,4,3,5,7};
////	min=find(arr);//������������
////}
////int find(int arr[5])//���յ���������׵�ַ int* arr ��������ָ������������ĵ�ַ
////{
////	int i=0,min=arr[0];
////	for(i=0;i<5;i++)
////	{
////		if(arr[i]<min)
////		{
////			min=arr[i];
////		}
////	}
////	printf("%d",min);
////}
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char str[20]="111defghij";
////	strncpy(str,"adcdef",3);
////	puts(str);
////}	
//#include <stdio.h>
//int maxInt(int a,int b)
//{
//	return (a>b?a:b);
//}
//int minInt(int a,int b)
//{
//	return (a<b?a:b);
//}
//int avgInt(int a,int b)
//{
//	return (a+b)/2;
//}
//int calc(int a,int b,int (*pa)(int ,int ))
//{
//	return (*pa)(a,b);
//}
//int main()
//{
//	int x=2012,y=2020,z;
//	int (*p)(int,int);
//	p=maxInt;
//	z=(*p)(x,y);
//	printf("���ֵ%d\n",z);
//	printf("��Сֵ%d\n",calc(x,y,minInt));
//	printf("ƽ��ֵ%d\n",calc(x,y,avgInt));
//	return 0;
//}
//ʹ��ָ������������飬���������ά����ȫ��Ԫ��
//#include <stdio.h>
//int main()
//{
//	int a[4][2]={{2,4},{6,8},{1,3},{5,7}};
//	int *p=a[0],i=0;
//	for(i=0;i<8;i++)
//	{
//		printf("%-3d",*p);
//		p++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0; int count = 0;
//	for (i = 2000; i < 3001; i++)
//		if (((i % 4 == 0) && (i % 100 != 0))||(i % 400 == 0))
//		{
//			printf("%d\t", i);
//			count++;
//			if(count%5==0)
//			{
//				printf("\n");
//			}
//		}
//	return 0;
//}
//#include <stdio.h>
//struct Stu
//{
//	int score;
//	char Name[20];
//	int age;
//};
//int main()
//{
//	int i=0;
//	struct Stu list[3];
//	struct Stu *p=list;
//	for(i=1;i<2;i++)
//	{
//		printf("������%dλͬѧ����Ϣ",i);
//		printf("����");
//		scanf("%d",&list[i].score);
//		printf("����");
//		scanf("%s",list[i].Name);
//		printf("����");
//		scanf("%d",&list[i].age);
//	}
//	for(i=0;i<1;i++)
//	{
//		printf("%d",p->score);
//		printf("%d",p->Name);
//		printf("%d",p->age);
//	}
//	return 0;
//}
////��ӡ100-200��������ÿ��5��
//#include <stdio.h>
//static int count=0;
//int aa(int n)
//{
//	int x;
//	for(x=2;x<=(n/2);x++)
//	{
//		if(n%x==0)
//		{
//			break;
//		}
//	}
//	return n;
//}
//int main()
//{
//	int i,s;
//	for(i=100;i<=200;i++)
//	{
//		s=aa(i);
//		printf("%d",s);
//	}
//	count++;
//		if(count%5==0)
//		{
//		printf("\n");
//		}
//	return 0;
//}
//����һ���ַ����������ַ��������֣���ĸ�������ַ��ĸ���
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[20];
//	int i=0,len,count=0,count2=0,count3=0;
//	gets(str);
//	for(i=0;str[i]!='\0';i++)
//	{
//		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
//		{
//		count++;
//		}
//		else if((str[i]>='0'&&str[i]<='9'))
//		{
//		count2++;}
//		else
//		{
//		count3++;
//		}
//	}
//	printf("������%d������ĸ��%d���������ַ���%d��",count2,count,count3);
//	return 0;
//}
/* 
*/
//#include <stdio.h>
//#include <windows.h>
//#include<math.h>
//void main()
//{	int num1=0,num2=0,num3=0,i;
//	char a[20];
//	gets(a);
//	for(i=0;a[i]!='\0';i++)
//		if (a[i]>='0'&&a[i]<='9') num1++;
//		else if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z') num2++;
//		else num3++;
//printf("������%d������ĸ��%d���������ַ���%d��",num1,num2,num3);
//
//	system("pause");
//}
#include <stdio.h>
struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct S1 s1={0};
	struct S2 s2={0};
	printf("%d\n",sizeof(s1));//12
	printf("%d\n",sizeof(s2));//8
	return 0;
}
