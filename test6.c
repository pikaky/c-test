#include<stdio.h>
#include<time.h>
#include<stalib.h>


int game()
{
	//利用时间戳产生随机数
	srand((unsigned int) time(NULL));  //unsigned int  强制转换 time 的long
	int ret = 0;
    int c = 0;
	int num = 0;
	c = rand()%100+1; //不加上面的就是伪随机 生成1-100
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
	printf("0:玩游戏,1:不玩\n");
	scanf("%d", &input);
	if (input == 0)
	{
		printf("开始玩游戏\n");
		game();
	}
	else
	{
		printf("exit");
	}


	return 0;
}