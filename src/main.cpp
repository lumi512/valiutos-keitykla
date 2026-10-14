#include <iostream>
#include <iomanip>

#include "main.h"
#include "menu.h"
#include "currency.h"
#include "actions.h"

bool g_quit = false;
Action g_action = ACTION_NONE;

void reset_state()
{
	g_action = ACTION_NONE;
	g_currency = CURRENCY_INVALID;
}

int main()
{
	setprecision(2);

	while (!g_quit)
	{
		if (g_action != ACTION_NONE)
		{
			currency_select();
			if (g_currency == CURRENCY_INVALID)
				continue;
		}

		switch (g_action)
		{
			case ACTION_NONE:
				main_menu();
				break;

			case ACTION_COMPARE:
				action_compare();
				break;
				
			default:
				cout << "Nezinomas veiksmas : " << g_action << endl;
				g_quit = true;
		}
	}

	return 0;
}