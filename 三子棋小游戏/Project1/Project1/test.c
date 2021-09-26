#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define row 3
#define col 3

int flat = 0;

void init_board(char board[row][col], int a, int b)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

// 棋盘样子
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |

	//void display(char board[row][col], int a, int b)
	//{
	//	int i = row;
	//	for (i = 0; i < row ; i++)
	//	{		
	//		printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
	//		if (i < row -1)
	//		{
	//			printf("---|---|---\n");
	//		}
	//	}

	//}
void display(char board[row][col], int a, int b)
{
	int i = 0;
	
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{

			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
	{
			for (j = 0; j < col; j++)
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
void playermove(char board[row][col], int a, int b)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf(":请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			display(board,row,col);
			break;
		}
		else
		{
		 display(board, row, col);
		 printf(":有数了");
		}
	}
	flat++;
}

void cpumove(char board[row][col], int a, int b)
{
	int x, y = 0;
	printf("电脑走：\n");
   while (1)
	{ 
	x = rand()%row;  //x只能是0 1 2
	y = rand()%col;   
	if (flat == 5)
	{
		break;
	}

	if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			display(board, row, col);
			break;
		}
	}
}
int explane(char board[row][col], int x, int y)
{
	int a = 0;
	int b = 0;
	int z = 0;
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		if (board[a][b] == board[a + 1][b + 1] && board[a + 1][b + 1] == board[a + 2][b + 2] && board[a][b]!= ' ')
		{
			z = 1;
		}
		if (board[a][b] == board[a - 1][b - 1] && board[a - 1][b - 1] == board[a - 2][b - 2] && board[a][b] != ' ')
		{
			z = 1;
		}
		if (board[a][b] == board[a + 1][b] && board[a + 1][b] == board[a + 2][b] && board[a][b] != ' ')
		{
			z = 1;
		}
		if (board[a][b] == board[a][b + 1] && board[a][b + 1] == board[a][b + 2] && board[a][b] != ' ')
		{
			z = 1;
		}
		a++;
		b++;
	}
		if (z == 1)
		{
			return 1;
		}

		else

		return 0;
		
}
void game()
{
	 //棋盘用数组表示
	char board[row][col] = { 0 }; //希望数组里全是空格
	init_board(board,row,col);
	display(board, row, col);

	while (1)
	{
		playermove(board,row,col);
		if (explane(board,row,col) == 1)
		{
			printf("玩家赢了");
			break;
		}
		cpumove(board, row, col);

		if (explane(board, row, col) == 1)
		{
			printf("电脑赢了");
			break;
		}

		if (flat == 5)
		{
			printf("平手");
			break;
		}
	}




}

void meun()
{
	printf("###################\n");
	printf("1,play ; 2, exit\n");
	printf("###################\n");
	
}



void play()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	scanf("%d", &input);

	if (input == 1)
	{
		printf("开始玩三子棋\n");
		game();
	}
	if (input == 0)
	{
		printf("exit\n");
	}


	
}



int main()
{
	meun();
	play();





	return 0;
}