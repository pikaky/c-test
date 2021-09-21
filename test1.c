#include<stdio.h>


//memset ( 对象 ，设置的值，到几个）
//int main()
//{
//
//	char arr[] = "hello world";
//	memset(arr,'*',5); 
//	printf(" %s\n", arr);
//	return 0;
//}

////函数的组成
//int add(int x,int y)      //返回类型(void=无返回）  函数名  参数
//{
//
//                //语句项
// 
//	return 0;   //返回值
//}

//void swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
// 形参 就是实参的临时拷贝  
// 对形参的修改是不会影响实参的  单向传递
void swap(int* x, int* y)
{

	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}

//int main()
//{
//	int a = 10;   //a，b x,y 的空间 地址不一样 不能直接用
//	int b = 20;
//	int* pa = &a;  //pa 指针变量   *pa解引用操作
//
//	printf("%d %d\n", a, b);
//
//	//swap1(a, b);   //这样写 只是把 a,b的值传给了x，y  传值调用
//	  swap(&a, &b);   //  传址调用 让子函数可以调用函数外部的变量
//
//	printf("%d %d\n", a, b);
//
//return 0;
//}

// 二分查找




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
	// 寻找有序数列中的某个数
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int i = 0;
	int ret=binary_search(arr, k);


	if (ret>=0)
	{
		printf("找到了%d\n", ret);

	}
	if (ret == -1)
	{
		printf("找不到");
	}

	return 0;
}

