#include "test.h"

int main()
{
	init();
	menu();
	while (1)
	{
		int menuCode = menu();
		if (menuCode == 0)
		{
			infoD();
		}
		else if (menuCode == 1)
		{
			return 0;
		}
		system("cls");
	}
}
