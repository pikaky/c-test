#include<stdio.h>
#include<time.h>
#include<stalib.h>


int game()
{
	//����ʱ������������
	srand((unsigned int) time(NULL));  //unsigned int  ǿ��ת�� time ��long
	int ret = 0;
    int c = 0;
	int num = 0;
	c = rand()%100+1; //��������ľ���α��� ����1-100
	while (1)
	{
		printf("please input\n");
		scanf("%d", &num);
		 if (num < c)
		{
			printf("small\n");
		}
		 if(num > c)
		{
			printf("bight\n");
		}
		 if(num == c)
		{
			printf("right %d\n",c);
			break;
		}

	}
	return 0;
}


int main()
{
	int input;
	printf("0:����Ϸ,1:����\n");
	scanf("%d", &input);
	if (input == 0)
	{
		printf("��ʼ����Ϸ\n");
		game();
	}
	else
	{
		printf("exit");
	}


	return 0;
}