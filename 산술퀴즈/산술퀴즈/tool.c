#include "test.h"

void init()
{
	system("mode con cols= 56 lines=20 | title »ê¼úÄûÁî");
}

void gotoxy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

int menu()
{
	int x = 24, y = 12;
	gotoxy(x - 2, y);
	printf("> °ÔÀÓ½ÃÀÛ");
	gotoxy(x, y + 1);
	printf("Á¾·á");
	while (1)
	{
		int n = keyControl();
		switch (n) {
		case UP: {
			if (y > 12)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				printf(">");
			}
			break;
		}
		case DOWN: {
			if (y < 13)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SPACE: {
			return y - 12;
		}
		}
	}
}

int keyControl()
{
	char temp = _getch();
	if (temp == 'w' || temp == 'W')
	{
		return UP;
	}
	else if (temp == 's' || temp == 'S')
	{
		return	DOWN;
	}
	else if (temp == 'a' || temp == 'A')
	{
		return LEFT;
	}
	else if (temp == 'd' || temp == 'D')
	{
		return RIGHT;
	}
	else if (temp == ' ')
	{
		return SPACE;
	}
}

void infoD()
{
	system("cls");
	printf("\n\n\n");
	printf("                         È¯¿µÇÕ´Ï´Ù!");
	printf("\n\n\n");
	printf("\n\n\n\n              ");
	while (1)
	{
		Sleep(1000);
		frontdoor();
	}
}
int front_main()
{
	int x = 7, y = 2;
	gotoxy(x + 9, y);
	printf("<¹®À» ¼±ÅÃÇØÁÖ¼¼¿ä>");
	/*µ¡¼À¹®*/
	gotoxy(x, y + 2);
	printf("¡á¡á¡á¡á");
	gotoxy(x, y + 3);
	printf("¡á    ¡á");
	gotoxy(x, y + 4);
	printf("¡á    ¡á");
	gotoxy(x, y + 5);
	printf("¡á    ¡á");
	gotoxy(x, y + 6);
	printf("¡á¡á¡á¡á");
	gotoxy(x, y + 8);
	printf("¡æ µ¡¼À");
	/*»¬¼À¹®*/
	gotoxy(x + 12, y + 2);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 12, y + 3);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 12, y + 4);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 12, y + 5);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 12, y + 6);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 12, y + 8);
	printf("   »¬¼À");
	/*°ö¼À¹®*/
	gotoxy(x + 24, y + 2);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 24, y + 3);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 24, y + 4);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 24, y + 5);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 24, y + 6);
	printf("¡á¡á¡á¡á");
	gotoxy(x + 24, y + 8);
	printf("   °ö¼À");
	while (1) {
		int n = keyControl();
		switch (n) {
		case RIGHT:
		{
			if (x < 31)
			{
				gotoxy(x, y + 8);
				printf("  ");
				gotoxy(x + 2, y + 3);
				printf("¡á¡á");
				gotoxy(x + 2, y + 4);
				printf("¡á¡á");
				gotoxy(x + 2, y + 5);
				printf("¡á¡á");
				gotoxy(x + 14, y + 3);
				printf("    ");
				gotoxy(x + 14, y + 4);
				printf("    ");
				gotoxy(x + 14, y + 5);
				printf("    ");
				gotoxy(x + 12, y + 8);
				printf("¡æ");
				x += 12;
			}
			break;
		}
		case LEFT:
		{
			if (x > 7) {
				gotoxy(x, y + 8);
				printf("  ");
				gotoxy(x - 10, y + 3);
				printf("    ");
				gotoxy(x - 10, y + 4);
				printf("    ");
				gotoxy(x - 10, y + 5);
				printf("    ");
				gotoxy(x + 2, y + 3);
				printf("¡á¡á");
				gotoxy(x + 2, y + 4);
				printf("¡á¡á");
				gotoxy(x + 2, y + 5);
				printf("¡á¡á");
				gotoxy(x - 12, y + 8);
				printf("¡æ");
				x -= 12;
			}
			break;
		}
		case SPACE: {
			return (x - 7) / 12;
		}
		}
	}
}

int frontdoor()
{
	system("cls");
	front_main();
	int startCode = front_main();
	if (startCode == 0)
	{
		sum();
	}
	else if (startCode == 1)
	{
		sub();
	}
	else if (startCode == 2)
	{
		mul();
	}


}

int sum()
{
	system("cls");
	int a, b, c, d;
	d = 0;
	while (1)
	{

		srand(time(NULL));
		a = rand() % 99 + 1;
		b = rand() % 99 + 1;
		gotoxy(22, 2);
		printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
		gotoxy(22, 3);
		printf("¡á   %d + %d = ?                      ¡á\n", a, b);
		gotoxy(22, 4);
		printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
		gotoxy(22, 5);
		printf("¸ÂÃá È½¼ö: %d\n\n", d);
		gotoxy(22, 7);
		printf("Á¤´äÀº?: ");
		scanf("%d", &c);
		if (c == a + b)
		{
			system("cls");
			d++;
		}
		else
		{
			system("cls");
			result(d);
			break;
		}
	}

}

int sub()
{
	system("cls");
	int a, b, c, d;
	d = 0;
	while (1)
	{

		srand(time(NULL));
		a = rand() % 99 + 1;
		b = rand() % 99 + 1;

		gotoxy(22, 2);
		printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
		gotoxy(22, 3);
		printf("¡á   %d - %d = ?                      ¡á\n", a, b);
		gotoxy(22, 4);
		printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
		gotoxy(22, 5);
		printf("¸ÂÃá È½¼ö: %d\n\n", d);
		gotoxy(22, 7);
		printf("Á¤´äÀº?: ");
		scanf("%d", &c);
		if (c == a - b)
		{
			system("cls");
			d++;
		}
		else
		{
			system("cls");
			result(d);
			break;
		}
	}

}

int mul()
{
	system("cls");
	int a, b, c, d;
	d = 0;
	while (1)
	{

		srand(time(NULL));
		a = rand() % 99 + 1;
		b = rand() % 99 + 1;

		gotoxy(22, 2);
		printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
		gotoxy(22, 3);
		printf("¡á   %d * %d = ?                      ¡á\n", a, b);
		gotoxy(22, 4);
		printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
		gotoxy(22, 5);
		printf("¸ÂÃá È½¼ö: %d\n\n", d);
		gotoxy(22, 7);
		printf("Á¤´äÀº?: ");
		scanf("%d", &c);
		if (c == a * b)
		{
			system("cls");
			d++;
		}
		else
		{
			system("cls");
			result(d);
			break;
		}
	}

}
void result(int d)
{
	gotoxy(22, 7);
	printf("¾Æ½±³×¿ä!");
	gotoxy(22, 9);
	printf("±â·Ï: %d", d);
}