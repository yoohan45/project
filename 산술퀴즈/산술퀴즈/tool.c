#include "test.h"

void init()
{
	system("mode con cols= 56 lines=20 | title �������");
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
	printf("> ���ӽ���");
	gotoxy(x, y + 1);
	printf("����");
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
	printf("                         ȯ���մϴ�!");
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
	printf("<���� �������ּ���>");
	/*������*/
	gotoxy(x, y + 2);
	printf("�����");
	gotoxy(x, y + 3);
	printf("��    ��");
	gotoxy(x, y + 4);
	printf("��    ��");
	gotoxy(x, y + 5);
	printf("��    ��");
	gotoxy(x, y + 6);
	printf("�����");
	gotoxy(x, y + 8);
	printf("�� ����");
	/*������*/
	gotoxy(x + 12, y + 2);
	printf("�����");
	gotoxy(x + 12, y + 3);
	printf("�����");
	gotoxy(x + 12, y + 4);
	printf("�����");
	gotoxy(x + 12, y + 5);
	printf("�����");
	gotoxy(x + 12, y + 6);
	printf("�����");
	gotoxy(x + 12, y + 8);
	printf("   ����");
	/*������*/
	gotoxy(x + 24, y + 2);
	printf("�����");
	gotoxy(x + 24, y + 3);
	printf("�����");
	gotoxy(x + 24, y + 4);
	printf("�����");
	gotoxy(x + 24, y + 5);
	printf("�����");
	gotoxy(x + 24, y + 6);
	printf("�����");
	gotoxy(x + 24, y + 8);
	printf("   ����");
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
				printf("���");
				gotoxy(x + 2, y + 4);
				printf("���");
				gotoxy(x + 2, y + 5);
				printf("���");
				gotoxy(x + 14, y + 3);
				printf("    ");
				gotoxy(x + 14, y + 4);
				printf("    ");
				gotoxy(x + 14, y + 5);
				printf("    ");
				gotoxy(x + 12, y + 8);
				printf("��");
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
				printf("���");
				gotoxy(x + 2, y + 4);
				printf("���");
				gotoxy(x + 2, y + 5);
				printf("���");
				gotoxy(x - 12, y + 8);
				printf("��");
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
		printf("���������������������\n");
		gotoxy(22, 3);
		printf("��   %d + %d = ?                      ��\n", a, b);
		gotoxy(22, 4);
		printf("���������������������\n");
		gotoxy(22, 5);
		printf("���� Ƚ��: %d\n\n", d);
		gotoxy(22, 7);
		printf("������?: ");
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
		printf("���������������������\n");
		gotoxy(22, 3);
		printf("��   %d - %d = ?                      ��\n", a, b);
		gotoxy(22, 4);
		printf("���������������������\n");
		gotoxy(22, 5);
		printf("���� Ƚ��: %d\n\n", d);
		gotoxy(22, 7);
		printf("������?: ");
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
		printf("���������������������\n");
		gotoxy(22, 3);
		printf("��   %d * %d = ?                      ��\n", a, b);
		gotoxy(22, 4);
		printf("���������������������\n");
		gotoxy(22, 5);
		printf("���� Ƚ��: %d\n\n", d);
		gotoxy(22, 7);
		printf("������?: ");
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
	printf("�ƽ��׿�!");
	gotoxy(22, 9);
	printf("���: %d", d);
}