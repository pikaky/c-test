#include <stdio.h>


//���Ͼ���
//��һ�����־��󣬾����ÿ�д����Ҷ��ǵ����ģ�������ϵ����ǵ����ģ�
//д�����������ľ����в���ĳ�������Ƿ���� ʱ�临�Ӷ�С��O(N);
//���ǲ����ñ���ȥ��
          //ѡ���Ͻ�|���½ǿ�ʼ�� �Ƚ�
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
	//�����Ͳ���
	//���Դ���ַ intx=3��inty =3
	// ���&x=x��&y=y�� �Ϳ��Դ���������������β�x��y
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


