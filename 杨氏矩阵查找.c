#include <stdio.h>


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右都是递增的，矩阵从上到下是递增的，
//写程序在这样的矩阵中查找某个数字是否存在 时间复杂度小于O(N);
//就是不能用遍历去找
          //选右上角|左下角开始找 比较
//1 2 3
//4 5 6
//7 8 9

int findnum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	int flag = 0; 
	while (1)
	{
		if (arr[x][y] > k)
		{
			x++;
		}
		if (arr[x][y] < k)
		{
	
			y++;
		}
		if (arr[x][y] == k)
		{
			return 1;
			break;

		}
		if (flag == (row - 1 + col) )
		{
			return 0;
			break;
		}
		flag++;

	}
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	//返回型参数
	//可以传地址 intx=3；inty =3
	// 最后&x=x，&y=y； 就可以传回来上面的行列形参x，y
	//int ret = findnum(arr, k, &x, &y);

	int ret = findnum(arr, k, 3, 3);
	if (ret == 1)
	{

		printf("zhaodao");
	}
	if (ret == 0)
	{
		printf("zhaobudao");
	}


	return 0;
}


