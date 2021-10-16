#include <stdio.h>
#include <string.h>


void leftmove(char *arr,int x)
{
	int i = 0;
	char y = 0;
	int len = strlen(arr);
	for (i = 0; i < x; i++)
	{
		y = *arr;
		int j = 0;
		for (j = 0; j < len-1; j++)
		{
			*(arr+j)= *(arr+j + 1);
		}

		*(arr+len-1)= y;

	}
}


//三部翻转法 
//abcdef
//ba fedc 左边逆序
//cd efab 整体逆序


//实现一个函数，可以左转字符串中的k个字符，
int main()
{
	char arr[] = "abcdef";

	leftmove(arr,2);

	printf("%s\n", arr);

	return 0;
}

