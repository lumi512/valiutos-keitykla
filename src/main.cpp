#include <iostream>
#include "main.h"
#include "menu.h"
#include "currency.h"

bool g_quit = false;
Action g_action = ACTION_NONE;

int main()
{
	while (!g_quit)
	{
		if (g_action != ACTION_NONE)
			currency_select();

		switch (g_action)
		{
			case ACTION_NONE:
				main_menu();
				break;

			default:
				cout << "Nezinomas veiksmas : " << g_action << endl;
				g_quit = true;
		}
	}

	return 0;
}