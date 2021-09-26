#include <stdio.h>




//
//int main()
//{
//
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//
//			printf("%d\n", arr[i][j]);
//
//		}
//
//
//	}

  int bubble_aort(int arr[]) //冒泡排序
{
	  int i = 0;
	  int z = 0;
	  int a = 0;
	  for (z = 0; z < 10; z++)
	  {
		  for (i = 0; i < 9; i++)
		  {
			  if (arr[i] > arr[i + 1])
			  {
				  a = arr[i];
				  arr[i] = arr[i + 1];
				  arr[i + 1] = a;
				  // 可以加一个判别标志 如果没有交换 置0 在后面判断跳出
			  }
		  }
	  }

	  for (i = 0; i < 10; i++)
	  {
		  printf("%d\n", arr[i]);
	  }
	return 0;
}

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1};
	// 对arr进行排序 

	bubble_aort(arr);

	return 0;

}

