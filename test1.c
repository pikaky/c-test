#include<stdio.h>


//memset ( ���� �����õ�ֵ����������
//int main()
//{
//
//	char arr[] = "hello world";
//	memset(arr,'*',5); 
//	printf(" %s\n", arr);
//	return 0;
//}

////���������
//int add(int x,int y)      //��������(void=�޷��أ�  ������  ����
//{
//
//                //�����
// 
//	return 0;   //����ֵ
//}

//void swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
// �β� ����ʵ�ε���ʱ����  
// ���βε��޸��ǲ���Ӱ��ʵ�ε�  ���򴫵�
void swap(int* x, int* y)
{

	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}

//int main()
//{
//	int a = 10;   //a��b x,y �Ŀռ� ��ַ��һ�� ����ֱ����
//	int b = 20;
//	int* pa = &a;  //pa ָ�����   *pa�����ò���
//
//	printf("%d %d\n", a, b);
//
//	//swap1(a, b);   //����д ֻ�ǰ� a,b��ֵ������x��y  ��ֵ����
//	  swap(&a, &b);   //  ��ַ���� ���Ӻ������Ե��ú����ⲿ�ı���
//
//	printf("%d %d\n", a, b);
//
//return 0;
//}

// ���ֲ���




int binary_search(int x[], int y)
{
	int right = 10;
	int left = 0;
	int i = 0;
	int c= (right + left) / 2+1 ;
	int ret = 0;
	while (1)
	{ 
		i = (right + left) / 2;
		if (i < y)
		{
			left = i;
		}
		if (i > y)
		{
			right = i;
		}
		if (i == y)
		{
			ret = y - 1;
			break;	
		}
		c--;
		if (c == 0)
		{
			ret = -1;
			break;
		}
	}



	return ret;
}


int main()
{
	// Ѱ�����������е�ĳ����
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int i = 0;
	int ret=binary_search(arr, k);


	if (ret>=0)
	{
		printf("�ҵ���%d\n", ret);

	}
	if (ret == -1)
	{
		printf("�Ҳ���");
	}

	return 0;
}

