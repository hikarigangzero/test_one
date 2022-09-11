#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"game.h"
#include <stdlib.h>

void a()
{
	printf("------------------------------\n");
	printf("---------简单硬核扫雷---------\n");
	printf("------------------------------\n");
	
}

void b()
{
	char c[e][r] = { 0 };
	char d[e][r] = { 0 };

	g(c, e, r, '0');
	g(d, e, r, '*');

	h(d, q, w);

	k(c, q, w);
	//h(c, q, w);

	n(c, d, q, w);

}

void g(char f[e][r], int qw, int er, char ty) 
{
	int i = 0, j = 0;
	for (i = 0; i < qw; i++)
	{
		for (j = 0; j < er; j++)
			f[i][j] = ty;
	};
}


void h(char f[e][r],int ui,int op) 
{
	int i = 0, j = 0;
	for (; j <= op; j++)printf(" %d", j);
	printf("\n");
	for (i = 1; i <= ui; i++) {
		printf(" %d", i);
		for (j = 1; j <= op; j++) {
			printf(" %c", f[i][j]);
		}printf("\n");
	}
}

void k(char c[e][r], int as, int df)
{
	int dns=10;
	while (dns) {
		int x = rand() % as + 1;
		int y = rand() % df + 1;
		if (c[x][y] == '0')
		{
			c[x][y] = '1';
			dns--;
		}

	}
}

int m(char c[e][r], int x, int y)
{
	return c[x - 1][y]
		+ c[x - 1][y - 1]
		+ c[x - 1][y + 1]
		+ c[x][y - 1]
		+ c[x][y + 1]
		+ c[x + 1][y]
		+ c[x + 1][y - 1]
		+ c[x + 1][y + 1] - 8 * '0';
}

void n(char c[e][r], char d[e][r], int as, int df)
{
	int win = 0;
	while (win<as*df-10) {
		int x = 0, y = 0;
		printf("请输入要排查的坐标：（行 列）");
		scanf("%d%d", &x, &y);
		if (x >= 1 && y >= 1 && x <= 9 && y <= 9) {
			if (c[x][y] == 1)
			{
				printf("恭喜，你被炸死了ヽ(✿ﾟ▽ﾟ)ノ");
				h(c, as, df);
				break;
			}
			else
			{
				int xqy = m(c, x, y);
				d[x][y] = xqy + '0';
				h(d, as, df);
				win++;
			}
		}
		else
			printf("错误，请输入合法数字。");
	}
	if (win == 71)
	{
		("恭喜你，获得胜利，奖励你再玩一次(●'◡'●)\n");
		h(c, q, w);
	}
}


int main()
{
	int input=0;
	srand((unsigned int)time(NULL));

	do {
		a();
		printf("------<开始--1，退出--0>------\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1: {printf("游戏开始\n");
			b();
		}break;
		case 0:printf("ヾ(￣▽￣)Bye~Bye~\n"); break;
		default:printf("错误,请重新输入\n"); break;
		}
	} while (!(input==0||input==1));
	
	return 0;
}
