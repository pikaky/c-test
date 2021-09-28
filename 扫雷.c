#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define row 11
#define col 11





int menu()
{
	
	printf("#################\n");
	printf("玩扫雷不 1玩 2不玩\n");
	printf("#################\n");
	return 0;
}

int play(char board[row][col], char check[row][col],int x,int y)
{
	int input = 0;
	scanf("%d", &input);
	{
		if (input == 1)
		{
			printf("开始玩游戏\n");
			game(board,check,x,y);
		}
		else
		{
			printf("exit");
		}
	}
	return 0;
}

int init(char board[row][col], char check[row][col], int x, int y)
{

	int i = 0;
	int a = 0;
	int b = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		a = rand() % 9 + 1;  
		b = rand() % 9 + 1;
		board[a][b] = 1;
	}
	i = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			check[i][j] = ' ';
		}
	}
}

int display(char board[row][col], char check[row][col], int x, int y)
{

	int i = 0;

	for (i = 1; i < row-1; i++)
	{
		int j = 1;
		for (j = 1; j < col-1; j++)
		{
			if(check[i][j]==' ')
			{ 
			printf(" %c ", check[i][j]);
			}
			if (check[i][j]!= ' ')
			{
				printf(" %d ", check[i][j]);
			}
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 1; j < col-1; j++)
			{

				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}

			}
			printf("\n");
		}
	}
}

void checkboom(char board[row][col], char check[row][col], int x, int y)
{
	char flat = 1;
	if (board[x - 1][y - 1] == 1)
	{
		flat = flat + 1;
	}
	if (board[x - 1][y] == 1)
	{
		flat = flat + 1;
	}
	if (board[x - 1][y + 1] == 1)
	{
		flat = flat + 1;
	}
	if (board[x][y + 1] == 1)
	{
		flat = flat + 1;
	}
	if (board[x + 1][y + 1] == 1)
	{
		flat = flat + 1;
	}
	if (board[x + 1][y] == 1)
	{
		flat = flat + 1;
	}
	if (board[x + 1][y - 1] == 1)
	{
		flat = flat + 1;
	}
	if (board[x][y - 1] == 1)
	{
		flat = flat + 1;
	}
	check[x][y] = ' ';
	check[x - 1][y - 1] = flat;
	check[x - 1][y] = flat;
	check[x - 1][y + 1] = flat;
	check[x][y + 1] = flat;
	check[x + 1][y + 1] = flat;
	check[x + 1][y] = flat;
	check[x + 1][y - 1] = flat;
	check[x][y - 1] = flat;

}

int playermove(char board[row][col], char check[row][col], int a, int b)
{
	int x = 0;
	int y = 0;
	int flat = 0;
	while (1)
	{
		printf(":请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (board[x][y] != 1)
		{
			
			if (board[x][y] == 0)
			{
				board[x][y] = '*';
				checkboom(board, check, x, y);
				display(board, check, row, col);
			}

		else
		{
			display(board, check, row, col);
			printf(":有数了\n");
		}
			flat++;
		}
		if (board[x][y] == 1)
		{
			printf("爆炸咯\n");
			break;
		}
		if (flat == 71)
		{
			printf("赢咯\n");
			break;
		}
	}


	return 0;

}


int game(char board[row][col], char check[row][col], int x, int y)
{
	init(board,check, row, col);
	display(board, check, row, col);
	playermove(board, check, row, col);

	return 0;
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	char board[row][col] = {0}; //多一圈 这样在边界时省去越界的判断
	char check[row ][col] = {0};  //用于显示
	while (1)
	{
		menu();
		play(board, check, row, col);
		printf("还玩吗 1玩 2不玩\n");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("冲冲冲\n");
		}
		else
		{
			printf("菜b\n");
			break;
		}
	}





}