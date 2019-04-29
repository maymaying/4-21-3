#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>


/*
//5.求两个数的最大公约数
int main()
{
	int a = 18;
	int b = 24;
	int c = 0;
	while (a%b != 0)//24%18 = 6
	{
		c = a%b;//6    c = 18%24 = 18
		a = b;//a == 18  a = 24
		b = c;//b == 6   b = 18
	}
	printf("%d\n", b);
	return 0;
}
*/



/*
//4.将三个数从大到小输出
int main()
{
	int a = 9;
	int b = 0;
	int c = 10;
	int tmp = 0;
	printf("%d,%d,%d\n",a,b,c);
	if(a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if(b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d,%d,%d\n",a,b,c);
	system("pause");
	return 0;
}
*/




//3.求10个整数中的最大值
int main()
{
	int arr[10] = {1,2,31,4,95,16,71,8,9,10};
	int arr2[10] = {0};
	int max = 0;
	int i = 0;
	max = arr[0];
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(i = 0;i < 10;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	for(i = 1;i < 10;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max = %d\n",max);
	system("pause");
	return 0;
}



/*
//2.2.不允许创建临时变量，交换两个数的内容（加减法）
int main()
{
	int a = 10;
	int b = 20;
	printf("%d,%d\n",a,b);
	//a = a+b;// a = 10+20 = 30
	//b = a-b;// b = 30-20 = 10
	//a = a-b;// a = 30-10 = 20

	// ^   异或  
	a = a^b;
	b = a^b;
	a = a^b;
    printf("%d,%d\n",a,b);
	system("pause");
	return 0;
}
*/



/*
//1.给定两个整型变量的值，将两个值的内容交换
int main()
{
	int n1 = 10;
	int n2 = 20;
	int tmp = n1;
	printf("%d,%d\n", n1, n2);
	n1 = n2;
	n2 = tmp;
	printf("%d,%d\n",n1,n2);
    system("pause");
	return 0;
}
*/



//3.打印1000~2000之间的闰年
/*
1000 - 2000
1、能被4整除但是不能被100整除。
2、能被400整除。
*/
/*
int main()
{
	int year = 0;
	for(year = 1000;year <= 2020;year++)
	{
		if(year%4 == 0 && year%100 != 0 || year%400 == 0)
		{
			printf("%d\n",year);
		}
	}
    system("pause");
	return 0;
}
*/



/*
int main()
{
	int year = 0;
	for(year = 1000;year <= 2000;year++)
	{
		if(year % 4 == 0)
		{
			if(year % 100 != 0)
			{
				printf("%d\n",year);
			}
		}
		if(year % 400 == 0)
		{
			printf("%d\n",year);
		}
	}
	system("pause");
	return 0;
	}
*/



//2.输出乘法口诀表
/*
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		int j = 0;
		for(j = 1;j <= i;j++)
		{
			printf("%d*%d = %-2d ",i,j,i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
*/




//1.打印100~200之间的素数
/*
int main()
{
	int i = 0;
	int count = 0;
	for(i = 101;i <= 200; i+=2)//除去偶数
	{
		int j = 0;
		for(j = 2;j <= sqrt((double)i);j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(j > sqrt((double)i))
		{
			count++;
			printf("%d\n",i);
		}
	}
	printf("count == %d\n",count);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int i = 0;
	int count = 0;
	for(i = 101;i <= 200;i++)
	{
		int j = 0;
		for(j = 2;j <= sqrt((double)i);j++)//有根小于 sqrt(i)   强转
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(j > sqrt((double)i))
		{
			count++;
			printf("%d\n",i);
		}
	}
	printf("count == %d\n",count);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int i = 0;
	int count = 0;
	for(i = 101;i <= 200;i++)
	{
		int j = 0;
		for(j = 2;j <= i/2;j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(j > i/2)
		{
			count++;
			printf("%d\n",i);
		}
	}
	printf("count == %d\n",count);
	system("pause");
	return 0;
}
*/



/*
ctr+k+c  注释
ctr+k+u  取消注释
*/

//试除法
/*
int main()
{
	int i = 0;
	int count = 0;
	for(i = 101;i <= 200;i++)
	{
		int j = 0;
		for(j = 2;j < i;j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}//break跳出循环
		if(i == j)
		{
			count++;
			printf("%d\n",i);
		}
	}
	printf("count == %d\n",count);
	system("pause");
	return 0;
}
*/
